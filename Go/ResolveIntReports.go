package main

import "fmt"

func digitsSum(N int) int {
	sum := 0
	for N > 0 {
		sum += N%10
		N /= 10
	}

	return sum
}

func multSum(sum int, R int) int {
	return sum * R
}


func main() {
	var N, R, rTimes int
	fmt.Print("Enter N : ")
	fmt.Scan(&N)
	fmt.Print("Enter R : ")
	fmt.Scan(&R)
	sumOfDigits := digitsSum(N)
	rTimes = multSum(sumOfDigits, R)
	Result := digitsSum(rTimes)
	fmt.Println("Result : ", Result)
}
