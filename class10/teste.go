package main

import "fmt"

func main() {
	fmt.Print("Enter a number: ")

	var n int

	fmt.Scanf("%d", &n)

	if n%2 == 0 {

		fmt.Println("PAR")
	} else {

		fmt.Println("IMPAR")
	}
}
