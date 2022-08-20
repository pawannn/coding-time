package main

import (
	"fmt"
)

func main() {
	n := []int {1, 2, 3, 4, 5}

	//reverse the array
	for i,j := 0, len(n) - 1; i < j; i,j = i+1, j-1{
		n[i], n[j] = n[j], n[i]
	}
	//Reversing done

	n[0] = n[0] + 1
	for index := range n {
		if n[index] == 10 {
			n[index] = 0
			if index == len(n) - 1{
				n = append(n, 0)
			} else {
				n[index + 1] = n[index + 1] + 1
			}
		}
	}

	//reverse the array
	for i,j := 0, len(n) - 1; i < j; i,j = i+1, j-1{
		n[i], n[j] = n[j], n[i]
	}
	//Reversing done

	fmt.Print(n)
}

