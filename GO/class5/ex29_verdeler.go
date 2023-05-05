/*Desenvolva um programa em C que lê um número do teclado
imprime na tela todos os divisores do número.*/

package main

import "fmt"

func main() {

	var n int

	fmt.Print("Digite um número: ")
	fmt.Scan(&n)

	for i := 1; i <= n; i++ {

		if n%i == 0 {

			fmt.Printf("\n%d é divisor de %d\n", i, n)
		}
	}
}
