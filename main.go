package main

import "C"
import "github.com/DanielVernall/cgo-error/mypackage"

func main() {}

//export exported_function
func exported_function() {
	mypackage.CallCFunction()
}
