package main

import (
	"bufio"
	"fmt"
	"log"
	"os"
)

func ReadFile() {
	file, err := os.Open("test.txt")
	if err != nil {
		log.Fatal(err)
	}

	defer file.Close()

	scanner := bufio.NewScanner(file)

	for scanner.Scan() {
		fmt.Println(scanner.Text())
	}

	if err != nil {
		log.Fatal(err)
	}
}

func WriteFile() {
	file, err := os.OpenFile("./test.txt", os.O_RDWR, 0644)
	if err != nil {
		log.Fatal(err)
	}

	defer file.Close()

	words := []string{"apple", "ball", "cat", "doll"}
	for _, word := range words {
		_, err := file.WriteString(word + "\n")

		if err != nil {
			log.Fatal(err)
		}

	}

	fmt.Print("Writing done")

}

func createFile() {
	file, err := os.Create("test.txt")
	if err != nil {
		log.Fatal(err)
	}
	file.Close()
}

func main() {
	createFile()
	ReadFile()
	WriteFile()
}
