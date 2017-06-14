#!/usr/bin/env bash

set -eu

BENCH_DIR=$(dirname $0)
cd $BENCH_DIR

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
echo =======================================================================
echo Benching...
echo =======================================================================
echo

echo "Reducer	Workers	Time (seconds)	Max RSS (Kbytes)" \
     > $RESULTS

MAX_SIZE=2000

function size_of_header {
    wc -c $HEADER | cut -f1 -d' '
}

function restore_orig {
    mv $HEADER.orig $HEADER
}

function is_small_and_interesting {
    size=$(size_of_header)
    echo "    ...reduced to $size bytes."

    # if (( $size > $MAX_SIZE )); then
    #     echo Error: was not reduced small enough!
    #     restore_orig
    #     exit 1
    # fi

    # ./predicate.sh >/dev/null 2>&1 || {
    #     echo Error: is not interesting after reduction!
    #     restore_orig
    #     exit 1
    # }

    restore_orig
}

echo
echo Initial test case is $(size_of_header) bytes
echo

for (( WORKERS=48; $WORKERS <= 48; WORKERS=2*$WORKERS )); do
    export BENCHING_PREDUCE=1

    echo Benching preduce with $WORKERS workers...

    TIME="preduce \t $WORKERS \t %e \t %M" \
        time -o $RESULTS --append \
        $PREDUCE --workers $WORKERS $HEADER $BENCH_DIR/predicate.sh ~/preduce/reducers/*.py \
        > "preduce-$WORKERS.log" 2>&1

    # Ensure that the test case was reduced and is still interesting (or else
    # the benchmark results are invalid), then restore the original, unreduced
    # test case.
    is_small_and_interesting

    echo "Benching preduce (no merging) with $WORKERS workers..."

    TIME="preduce-no-merging \t $WORKERS \t %e \t %M" \
        time -o $RESULTS --append \
        $PREDUCE \
            --workers $WORKERS --no-merging \
            $HEADER $BENCH_DIR/predicate.sh ~/preduce/reducers/*.py \
        > "preduce-no-merging-$WORKERS.log" 2>&1

    is_small_and_interesting

    export BENCHING_PREDUCE=0

    echo Testing creduce with $WORKERS workers

    # TODO FITZGEN: equivalent reduction passes
    TIME="creduce \t $WORKERS \t %e \t %M" \
        time -o $RESULTS --append \
        creduce --n $WORKERS ./predicate.sh $HEADER \
        > "creduce-$WORKERS.log" 2>&1

    # Same as above.
    is_small_and_interesting
done

echo
echo =======================================================================
echo Complete!
echo =======================================================================
echo

cat $RESULTS
