package mypackage

// #include "errors.h"
import "C"

func CallCFunction() {
	_ = C.mymodule_func1()
}
