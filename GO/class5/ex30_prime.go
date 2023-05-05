/*Desenvolva um programa em C que lê um número do teclado e
verifica se ele é primo ou não.*/

package main

import (
	"fmt"
)

func main() {

	var n, contador int

	fmt.Printf("Digite um número: ")
	fmt.Scan(&n)

	for i := 2; i <= n/2; i++ {

		if n%i == 0 {

			contador++
		}
	}

	if contador == 0 {

		fmt.Printf("O número %d é primo\n", n)
	} else {

		fmt.Printf("O número %d não é primo\n", n)
	}
}
