package main

import (
	"fmt"
)

type person struct {
	name string
	age int
}

func main(){
	fmt.Println("Hello, World!")
	person1 := person{name : "pawan", age : 20}
	fmt.Println(person1)
}