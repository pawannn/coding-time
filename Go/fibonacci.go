package main

import (
	"fmt"
)

func main() {
	limit := 5
	for i := 0; i <= limit; i++ {
		fmt.Print(fib(i))
		fmt.Print("\n")
	}
}

func fib(n int) int {
	if n <= 1 {
		return n
	} else {
		return fib(n-1) + fib(n-2)
	}
}
