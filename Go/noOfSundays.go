/*

*/

package main

import (
	"fmt"
)

func main() {
	fmt.Print("Hello, world.\n")
	var noOfDays, noOfSundays int;
	fmt.Print("Enter number of Days : ")
	fmt.Scanf("%d", &noOfDays);
	i := 1
	for i < noOfDays {
		noOfSundays++
		i += 7 
	}
	fmt.Print((noOfSundays))
}