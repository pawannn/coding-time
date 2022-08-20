package main

import (
	"fmt"
)

func reverse(str string) string{
	var res string
	for i := len(str) - 1; i >= 0; i-- {
		res += string(str[i])
	}

	return res
}

func main() {
	fmt.Print("hello world")
	var str string
	fmt.Print("Enter a string: ")
	fmt.Scan(&str)
	res := reverse(str)
	switch(str == res){
	case true:
		fmt.Print("Palindrome")
	case false:
		fmt.Print("Not Palindrome")
	}
}
