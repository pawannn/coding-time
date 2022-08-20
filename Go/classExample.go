package main

import "fmt"

type person struct {
	name string
	age int
}

func (p person) display() {
	fmt.Println("Person name : ",p.name)
	fmt.Println("Person age : ",p.age)
}

func main() {
	p1 := person{name : "pawan", age : 19}
	p1.display()
}
