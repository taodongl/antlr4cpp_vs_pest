use cmake;

fn main() {
    let dst = cmake::build("antlrhelp");
    println!("cargo:rustc-link-search=native={}", dst.display());
    println!("cargo:rustc-link-lib=dylib=antlrhelp");
}
