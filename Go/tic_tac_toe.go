package main

import (
	"fmt"
)

var board[9] string

func gameInit() {
	for i := 0; i < 9; i++ {
		board[i] = " ";
	}
}

func displayBoard(){
	count := 0
	fmt.Print("\n+-------------------+\n")
	fmt.Print("+    TIC-TAC-TOE    +\n")
	fmt.Print("+-------------------+")
	for i := 0; i < 9; i++ {
		if(count % 3 == 0){
			fmt.Print("\n");
		}
		fmt.Print("| [",board[i], "] |");
		count += 1
	}
	fmt.Print("\n+-------------------+\n")
}

func checkWin() bool{
	if board[0] == "X" && board[1] == "X" && board[2] == "X" ||
	board[3] == "X" && board[4] == "X" && board[5] == "X" || 
	board[6] == "X" && board[7] == "X" && board[8] == "X" || 
	board[0] == "X" && board[3] == "X" && board[6] == "X" ||
	board[1] == "X" && board[4] == "X" && board[7] == "X" ||
	board[2] == "X" && board[5] == "X" && board[8] == "X" ||
	board[0] == "X" && board[4] == "X" && board[8] == "X" ||
	board[2] == "X" && board[1] == "X" && board[6] == "X" {
		fmt.Printf("\tX wins!!!")
		return true
	} else if board[0] == "O" && board[1] == "O" && board[2] == "O" ||
	board[3] == "O" && board[4] == "O" && board[5] == "O" || 
	board[6] == "O" && board[7] == "O" && board[8] == "O" || 
	board[0] == "O" && board[3] == "O" && board[6] == "O" ||
	board[1] == "O" && board[4] == "O" && board[7] == "O" ||
	board[2] == "O" && board[5] == "O" && board[8] == "O" ||
	board[0] == "O" && board[4] == "O" && board[8] == "O" ||
	board[2] == "O" && board[1] == "O" && board[6] == "O"{
		fmt.Printf("O wins!!!")
		return true
	} else {
		count := 0
		for i := 0; i < 9; i++ {
			if board[i] != " "{
				count += 1
			}
		}
		if count == 9{
			fmt.Printf("Draw!!!")
			return true
		} else{
			return false
		}
	}
}

func main() {
	gameInit()
	displayBoard()
	var x int
	var o int
	for true {
		checkpoint1:
		fmt.Print("\n(Player X) Enter your position : ")
		fmt.Scan(&x)
			if board[x] != " " {
				goto checkpoint1
			}
		board[x] = "X"
		displayBoard()

		if checkWin() == true {
			break
		}

		checkpoint2:
		fmt.Print("\n(Player O) Enter your position : ")
		fmt.Scan(&o)
			if board[o] != " " {
				goto checkpoint2
			}
		board[o] = "O"
		displayBoard()

		if checkWin() == true {
			break
		}
	}
	displayBoard()
}
