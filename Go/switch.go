package main

import (
	"fmt"
)

func main(){
	var result bool = true
	switch(result){
	case true:
		fmt.Println("true")
	case false:
		fmt.Println("false")
	default:
		fmt.Println("default")
	}

}