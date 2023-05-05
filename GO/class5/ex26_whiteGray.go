/*Desenvolva um programa que imprime na tela “branco” e “cinza”
alternadamente 𝑛 vezes.*/

package main

import "fmt"

func main() {

	var n int

	fmt.Printf("Digite um numero: ")
	fmt.Scanln(&n)

	for i := 1; i <= n; i++ {

		if i%2 != 0 {

			fmt.Println("Branco")
		} else {

			fmt.Println("Cinza")
		}
	}
}
