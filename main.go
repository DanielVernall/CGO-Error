package main

import "C"

func main() {}

//export exported_function
func exported_function() {
	mypackage.CallCFunction()
}
