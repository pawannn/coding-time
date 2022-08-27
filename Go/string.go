package main

import "fmt"

func isAnagram(s string, t string) bool {
    dict := make(map[rune]int) //declare a dictionary
    
    for _,value := range s { //iterate over the 's' string
        dict[value]++ //for every same value increment the value of the key (characters of s)
    }
    
    for _, value := range t {
        dict[value]-- //for every same value decrement the value of the key (characters of t)
    }
    
    for key, _ := range dict { //iterate over the dictionary
        if dict[key] != 0{ //if any value has value other than 0, then the given sting is not anagram
            return false
        }
    }
    return true //return True of all the values of the keys are 0
}

func main() {
	fmt.Println(isAnagram("anagram", "nagaram"))
	fmt.Println(isAnagram("rat", "car"))
}