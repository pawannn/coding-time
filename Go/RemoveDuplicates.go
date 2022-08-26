package main

import (
	"fmt"
)

func search(n []int, x int) bool {
	for _, value := range n {
		if value == x {
			return true
		}
	}
	return false
}

func removeDuplicates(nums []int) []int {
    var lst[]int
    
    for _, value := range nums  {
        if search(lst, value) == false {
            lst = append(lst, value)
        }
    }
    
    return lst
}


func main(){
	arr := []int{1,1,2}
	fmt.Println(removeDuplicates(arr))
}
