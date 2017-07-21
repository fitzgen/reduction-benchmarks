#!/usr/bin/env bash

set -uex

BENCHMARK_DIR=$(dirname $0)

BINDGEN=$BENCHMARK_DIR/bindgen/target/release/bindgen

if [[ "${BENCHING_PREDUCE:=0}" == "1" ]]; then
    HEADER=$1
else
    HEADER=./rooted.hpp
fi

BINDINGS=./rooted.rs
TESTFILE=./rooted

"$BINDGEN" \
    "$HEADER" \
    --whitelist-function "JS::AddPersistentRoot" \
    --enable-cxx-namespaces \
    -o "$BINDINGS" \
    -- \
    -include "$BENCHMARK_DIR/replacements.hpp" \
    -x c++ \
    -std=c++14

rustup run nightly-2017-07-19 rustc --test "$BINDINGS" -o "$TESTFILE"

set +ex
OUTPUT=$("$TESTFILE" 2>&1)
set -e

echo "$OUTPUT" | grep -q "assertion failed:"
echo "$OUTPUT" | grep -q "Size of template specialization: root :: JS :: PersistentRooted < \* mut :: std :: os :: raw :: c_void >"
