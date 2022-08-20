package main

import (
	"fmt"
)

func isSubString(s1 string, s2 string) bool{
	stat := false
	j := 0
	for i := 0; i < len(s1); {
		if s1[i] == s2[j] {
			i++
			j++
		} else {
			i++
			j = 0
		}
		if j == len(s2) {
			stat = true
			break
		}
	}
	return stat
}

func main() {

	strings := []string{"time", "me", "bell"}
	res := strings[0]+"#"
	for i := 1; i < len(strings); i++ {
		if(isSubString(res, strings[i]) == false){
			res = res + strings[i] + "#"
		}
	}
	fmt.Println(res)
}
