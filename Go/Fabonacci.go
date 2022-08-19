// Fabonacci series
package main

import (
	"fmt"
)

func main(){
	limit := 20
	var n1 int = 0
	var n2 int = 1
	fmt.Println(n1)
	for i := 0; i < limit; i++{
		fmt.Println(n2)
		n1 = n2
		n2 = n1 + n2
	}
}