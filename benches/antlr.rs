#![feature(test)]
extern crate test;

use pestvsantlr::antlr_parse;

use test::Bencher;

//const CANADA : &str = include_str!("../assets/canada.json");
const DATA : &str = include_str!("../assets/data.json");

// fail for the case
// #[bench]
// fn antlr_canada_collect(b: &mut Bencher) {
//   b.iter(|| antlr_parse(CANADA));
// }
#[bench]
fn antlr_data_collect(b: &mut Bencher) {
  b.iter(|| antlr_parse(DATA));
}


