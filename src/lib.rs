use std::ffi::CString;
use std::os::raw::c_char;

extern "C" {
    fn antlr_json_parse(string: *const c_char) -> std::os::raw::c_int;
}

pub fn antlr_parse(data: &str) {
    unsafe {
        let c_str = CString::new(data).unwrap();
        antlr_json_parse(c_str.as_ptr() as *const c_char);
    }
}