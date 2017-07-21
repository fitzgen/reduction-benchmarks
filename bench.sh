#!/usr/bin/env bash

set -eu

BENCH_DIR=$(dirname $0)
cd $BENCH_DIR

export RUST_BACKTRACE=1
ulimit -S -n 8192

function which_or_exit {
    which "$1" 1>/dev/null 2>&1 || {
        echo "error: could not find $1! Set the $2=<path/to/executable> environment"
        echo "variable or ensure it is on you \$PATH."
        exit 1
    }
}

: ${PREDUCE:=""}
if [[ "$PREDUCE" == "" ]]; then
    which_or_exit preduce PREDUCE
    PREDUCE=$(which preduce)
fi
echo "PREDUCE=$PREDUCE"

: ${CREDUCE:=""}
if [[ "$CREDUCE" == "" ]]; then
    which_or_exit creduce CREDUCE
    CREDUCE=$(which creduce)
fi
echo "CREDUCE=$CREDUCE"

: ${HEADER:=./rooted.hpp}
echo "HEADER=$HEADER"

: ${RESULTS:=results.tsv}
echo "RESULTS=$RESULTS"

echo
echo "======================================================================="
echo "Benching..."
echo "======================================================================="
echo

echo "Reducer	Workers	Time (seconds)	Max RSS (Kbytes)" \
     > "$RESULTS"

MAX_SIZE=500

function size_of_header {
    wc -c "$HEADER" | cut -f1 -d' '
}

function restore_orig {
    mv "$HEADER.orig" "$HEADER"
}

function is_small_and_interesting {
    size=$(size_of_header)
    elapsed=$(tail -n 1 "$RESULTS" | cut -f 3)
    echo "    reduced to $size bytes in $elapsed seconds."

    # if (( $size > $MAX_SIZE )); then
    #     echo "Error: was not reduced small enough!"
    #     restore_orig
    #     exit 1
    # fi

    # BENCHING_PREDUCE=1 ./predicate.sh "$HEADER" >/dev/null 2>&1 || {
    #     echo "Error: is not interesting after reduction!"
    #     restore_orig
    #     exit 1
    # }

    restore_orig
}

echo
echo "Initial test case is $(size_of_header) bytes"
echo

BENCHING_PREDUCE=1 ./predicate.sh "$HEADER" >/dev/null 2>&1 || {
    echo "Error: the test case is not initially interesting! This is a bug in the"
    echo "benchmark, or maybe the wrong version of libclang is installed or"
    echo "something like that."
    exit 1
}

for (( WORKERS=48; $WORKERS <= 48; WORKERS=2*$WORKERS )); do
    export BENCHING_PREDUCE=1

    echo "Benching preduce with $WORKERS workers..."

    TIME="preduce \t $WORKERS \t %e \t %M" \
        time -o "$RESULTS" --append \
        "$PREDUCE" --workers "$WORKERS" "$HEADER" "$BENCH_DIR/predicate.sh" ~/preduce/reducers/*.py \
        > "preduce-$WORKERS.log" 2>&1

    # Ensure that the test case was reduced and is still interesting (or else
    # the benchmark results are invalid), then restore the original, unreduced
    # test case.
    is_small_and_interesting

    echo "Benching preduce (no merging) with $WORKERS workers..."

    TIME="preduce-no-merging \t $WORKERS \t %e \t %M" \
        time -o "$RESULTS" --append \
        "$PREDUCE" \
            --workers "$WORKERS" --no-merging \
            "$HEADER" "$BENCH_DIR/predicate.sh" ~/preduce/reducers/*.py \
        > "preduce-no-merging-$WORKERS.log" 2>&1
    is_small_and_interesting

    # echo "Benching preduce (lazily reseeding) with $WORKERS workers..."

    # TIME="preduce-lazily-reseed \t $WORKERS \t %e \t %M" \
    #     time -o "$RESULTS" --append \
    #     "$PREDUCE" \
    #     --workers "$WORKERS" --lazily-reseed \
    #     "$HEADER" "$BENCH_DIR/predicate.sh" ~/preduce/reducers/*.py \
    #     > "preduce-lazily-reseed-$WORKERS.log" 2>&1
    # is_small_and_interesting

    # echo "Benching preduce (with shuffling) with $WORKERS workers..."

    # TIME="preduce-shuffle \t $WORKERS \t %e \t %M" \
    #     time -o "$RESULTS" --append \
    #     "$PREDUCE" \
    #     --workers "$WORKERS" --shuffle \
    #     "$HEADER" "$BENCH_DIR/predicate.sh" ~/preduce/reducers/*.py \
    #     > "preduce-shuffle-$WORKERS.log" 2>&1
    # is_small_and_interesting

    export BENCHING_PREDUCE=0

    echo "Testing creduce with $WORKERS workers..."

    # These are the reduction passes that have also been ported for preduce so
    # that the playing field is even.
    TIME="creduce \t $WORKERS \t %e \t %M" \
        time -o "$RESULTS" --append \
        creduce --n $WORKERS ./predicate.sh "$HEADER" \
        --no-default-passes \
        --skip-initial-passes \
        --add-pass pass_blank 0 1 \
        --add-pass pass_lines 0 410 \
        --add-pass pass_lines 1 411 \
        --add-pass pass_lines 2 412 \
        --add-pass pass_lines 3 413 \
        --add-pass pass_lines 4 414 \
        --add-pass pass_lines 6 415 \
        --add-pass pass_lines 8 416 \
        --add-pass pass_lines 10 417 \
        --add-pass pass_lines 10 417 \
        --add-pass pass_clang remove-namespace 200 \
        --add-pass pass_clang aggregate-to-scalar 201 \
        --add-pass pass_clang local-to-global 9500 \
        --add-pass pass_clang param-to-global 203 \
        --add-pass pass_clang param-to-local 204 \
        --add-pass pass_clang remove-nested-function 205 \
        --add-pass pass_clang rename-fun 207 \
        --add-pass pass_clang union-to-struct 208 \
        --add-pass pass_clang rename-param 209 \
        --add-pass pass_clang rename-var 210 \
        --add-pass pass_clang rename-class 211 \
        --add-pass pass_clang rename-cxx-method 212 \
        --add-pass pass_clang return-void 212 \
        --add-pass pass_clang simple-inliner 213 \
        --add-pass pass_clang reduce-pointer-level 214 \
        --add-pass pass_clang lift-assignment-expr 215 \
        --add-pass pass_clang copy-propagation 216 \
        --add-pass pass_clang callexpr-to-value 217 \
        --add-pass pass_clang replace-callexpr 218 \
        --add-pass pass_clang simplify-callexpr 219 \
        --add-pass pass_clang remove-unused-function 220 \
        --add-pass pass_clang remove-unused-enum-member 221 \
        --add-pass pass_clang remove-enum-member-value 222 \
        --add-pass pass_clang simplify-if 224 \
        --add-pass pass_clang reduce-array-dim 225 \
        --add-pass pass_clang reduce-array-size 226 \
        --add-pass pass_clang move-function-body 227 \
        --add-pass pass_clang simplify-comma-expr 228 \
        --add-pass pass_clang simplify-dependent-typedef 229 \
        --add-pass pass_clang replace-simple-typedef 230 \
        --add-pass pass_clang replace-dependent-typedef 231 \
        --add-pass pass_clang replace-one-level-typedef-type 232 \
        --add-pass pass_clang remove-unused-field 233 \
        --add-pass pass_clang instantiate-template-type-param-to-int 234 \
        --add-pass pass_clang instantiate-template-param 235 \
        --add-pass pass_clang template-arg-to-int 236 \
        --add-pass pass_clang template-non-type-arg-to-int 237 \
        --add-pass pass_clang reduce-class-template-param 238 \
        --add-pass pass_clang remove-trivial-base-template 239 \
        --add-pass pass_clang class-template-to-class 240 \
        --add-pass pass_clang remove-base-class 241 \
        --add-pass pass_clang replace-derived-class 242 \
        --add-pass pass_clang remove-unresolved-base 243 \
        --add-pass pass_clang remove-ctor-initializer 244 \
        --add-pass pass_clang replace-class-with-base-template-spec 245 \
        --add-pass pass_clang simplify-nested-class 246 \
        --add-pass pass_clang remove-unused-outer-class 247 \
        --add-pass pass_clang empty-struct-to-int 248 \
        --add-pass pass_clang remove-pointer 249 \
        --add-pass pass_clang reduce-pointer-pairs 250 \
        --add-pass pass_clang remove-array 251 \
        --add-pass pass_clang remove-addr-taken 252 \
        --add-pass pass_clang simplify-struct 253 \
        --add-pass pass_clang replace-undefined-function 254 \
        --add-pass pass_clang replace-array-index-var 255 \
        --add-pass pass_clang replace-array-access-with-index 256 \
        --add-pass pass_clang replace-dependent-name 257 \
        --add-pass pass_clang simplify-recursive-template-instantiation 258 \
        --add-pass pass_clang vector-to-array 259 \
        --add-pass pass_clang combine-global-var 990 \
        --add-pass pass_clang combine-local-var 991 \
        --add-pass pass_clang simplify-struct-union-decl 992 \
        --add-pass pass_clang move-global-var 993 \
        --add-pass pass_clang unify-function-decl 994 \
        --add-pass pass_indent regular 1000 \
        --add-pass pass_clex delete-string 1001 \
        --add-pass pass_clex rm-toks-1 9016 \
        --add-pass pass_clex rm-toks-2 9017 \
        --add-pass pass_clex rm-toks-3 9018 \
        --add-pass pass_clex rm-toks-4 9019 \
        --add-pass pass_clex rm-toks-5 9020 \
        --add-pass pass_clex rm-toks-6 9021 \
        --add-pass pass_clex rm-toks-7 9022 \
        --add-pass pass_clex rm-toks-8 9023 \
        --add-pass pass_clex rm-toks-9 9024 \
        --add-pass pass_clex rm-toks-10 9025 \
        --add-pass pass_clex rm-toks-11 9026 \
        --add-pass pass_clex rm-toks-12 9027 \
        --add-pass pass_clex rm-toks-13 9028 \
        --add-pass pass_clex rm-toks-14 9029 \
        --add-pass pass_clex rm-toks-15 9030 \
        --add-pass pass_clex rm-toks-16 9031 \
        --add-pass pass_clex rename-toks 9800 \
        --add-pass pass_clex delete-string 9801 \
        --add-pass pass_clex define 9802 \
        > "creduce-$WORKERS.log" 2>&1
    is_small_and_interesting
done

echo
echo "======================================================================="
echo "Benchmark complete!"
echo "======================================================================="
echo

cat "$RESULTS"
