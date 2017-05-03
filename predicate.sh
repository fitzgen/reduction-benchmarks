#!/usr/bin/env bash

set -uex

BENCHMARK_DIR=$(dirname $0)

BINDGEN=$BENCHMARK_DIR/bindgen/target/release/bindgen

if [[ "${BENCHING_PREDUCE:=0}" != "0" ]]; then
    HEADER=$1
else
    HEADER=./rooted.hpp
fi

BINDINGS=./rooted.rs

$BINDGEN \
    $HEADER \
    --whitelist-function "JS::AddPersistentRoot" \
    --enable-cxx-namespaces \
    -o $BINDINGS \
    -- \
    -include "$BENCHMARK_DIR/replacements.hpp" \
    -std=c++14

rustc --test rooted.rs

./rooted \
    2>&1 \
    | grep -E "assertion failed: .*: Size of template specialization: root :: JS :: PersistentRooted < \* mut :: std :: os :: raw :: c_void >"
