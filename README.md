## Conclusion

The performance of `Antlr4 for C++` is **terriable**, it is more than 10 times slower than `pest`. 


(I guess `antlr` wasted time on `UTF32 <-> UTF8` format conversion)


## Detail
### command
```
$ cargo bench
```
### output
```
     Running benches/antlr.rs (target/release/deps/antlr-1d4287747cf6da61)

running 1 test
test antlr_data_collect ... bench:     354,408 ns/iter (+/- 22,124)

test result: ok. 0 passed; 0 failed; 0 ignored; 1 measured; 0 filtered out; finished in 0.33s

     Running benches/pest.rs (target/release/deps/pest-f1d6aaa62b40e6c2)

running 2 tests
test pest_data_collect ... bench:      28,384 ns/iter (+/- 4,380)
test pest_data_shallow ... bench:      28,300 ns/iter (+/- 2,443)

test result: ok. 0 passed; 0 failed; 0 ignored; 2 measured; 0 filtered out; finished in 6.08s
```

## Environment

### Antlr4
```
 $ brew list --versions antlr4-cpp-runtime
antlr4-cpp-runtime 4.13.0
```

### Rust
```
 $ rustc --version
rustc 1.72.0-nightly (114fb86ca 2023-06-15)
```

### System
```
Processor: 2.6 GHz 6-Core Intel Core i7
Memory: 32 GB 2667 MHz DDR4
macOS: 13.4
```