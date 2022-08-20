package main

import (
	"fmt"
)

func main() {
	var NoOfTime int
	fmt.Print("Enter the number of times to rotate the array: ")
	fmt.Scanf("%d", &NoOfTime)
	x := []int{1,2,3,4,5,6,7}
	for i := 0; i < NoOfTime; i++ {
		x = append(x[1:], x[0])
	}
	fmt.Println(x)
}
