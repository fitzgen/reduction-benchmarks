#!/usr/bin/env bash

set -eu

cd $(dirname "$0")

BINDGEN_REPO=https://github.com/servo/rust-bindgen.git
BINDGEN_COMMIT=86aabcf

function msg {
    echo
    echo "setup.sh: $1"
    echo
}

# Because our predicate relies on the specific formatting of error messages, pin
# to a specific rustc version.
rustup override set nightly-2017-07-19

if [[ ! -d bindgen ]]; then
    msg "Cloning bindgen..."
    git clone "$BINDGEN_REPO" bindgen
else
    msg "Have bindgen"
fi

cd bindgen

if [[ "$(git rev-parse --short HEAD)" != "$BINDGEN_COMMIT" ]]; then
    msg "Checking out $BINDGEN_COMMIT..."
    git checkout "$BINDGEN_COMMIT"
    cargo clean
else
    msg "bindgen already at the correct commit."
fi

if [[ ! -x ./target/release/bindgen ]]; then
    msg "Building bindgen..."
    cargo build --release
else
    msg "bindgen already built."
fi

msg "Setup completed OK!"
