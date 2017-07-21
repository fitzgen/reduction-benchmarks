Benchmarks for comparing the performance of `creduce` and `preduce`.

This benchmark reduces a Real World test case that exposes a Real World
`bindgen` bug. It performs the reduction with both `creduce` and `preduce`. It
configures them both to use the same reduction passes.

### Requirements

Before beginning, make sure you have the following installed:

* `git`
* `libclang` >= 3.9.X: https://servo.github.io/rust-bindgen/requirements.html#clang
* `rustc` and `cargo`: https://www.rust-lang.org/en-US/install.html
* `preduce`: https://github.com/fitzgen/preduce
* `creduce`: https://embed.cs.utah.edu/creduce/

### Setup

Run this once to checkout and build the correct version of `bindgen`:

```
$ ./setup.sh
```

### Running the Benchmarks

To run the benchmarks:

```
$ ./bench.sh
```

This will generate a tsv file with the benchmark results in it.
