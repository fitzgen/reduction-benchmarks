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

echo "Reducer	Workers	Time (seconds)	Max RSS (Kbytes)	Avg. RSS (Kbytes)" \
     > $RESULTS

MAX_SIZE=531

function size_of_header {
    wc -c $HEADER | cut -f1 -d' '
}

function is_small_and_interesting {
    size=$(size_of_header)
    echo Reduced to $size bytes

    if (( $size > $MAX_SIZE )); then
        echo error: was not reduced small enough!
        exit 1
    fi

    ./predicate.sh >/dev/null 2>&1 || {
        echo error: is not interesting after reduction!
        exit 1
    }
}

echo
echo Initial test case is $(size_of_header) bytes
echo

for (( WORKERS=1; $WORKERS <= 128; WORKERS=2*$WORKERS )); do
    echo Benching preduce with $WORKERS workers

    export BENCHING_PREDUCE=1
    TIME="preduce \t $WORKERS \t %e \t %M \t %t" \
        time -o $RESULTS --append \
        $PREDUCE --workers $WORKERS $HEADER $BENCH_DIR/predicate.sh ~/preduce/reducers/* # \
        # > /dev/null 2>&1
    export BENCHING_PREDUCE=0

    # Ensure that the test case was reduced and is still interesting (or else
    # the benchmark results are invalid), then restore the original, unreduced
    # test case.
    is_small_and_interesting
    mv $HEADER.orig $HEADER

    # echo Testing creduce with $WORKERS workers

    # TODO FITZGEN: equivalent reduction passes
    # TIME="creduce \t $WORKERS \t %e \t %M \t %t" \
    #     time -o $RESULTS --append \
    #     creduce --n $WORKERS ./predicate.sh $HEADER \
    #     > /dev/null 2>&1

    # Same as above.
    # is_small_and_interesting
    # mv $HEADER.orig $HEADER
done

echo
echo =======================================================================
echo Complete!
echo =======================================================================
echo

cat $RESULTS