/*Escreva um programa em C que leia um número inteiro e verifique se
ele é par ou ímpar. O programa deve imprimir na tela uma mensagem
informando se o número é par ou ímpar.*/

package main

import "fmt"

func main() {

	var n int

	fmt.Print("Digite um número inteiro n: ")
	fmt.Scan(&n)

	if n%2 == 0 {

		fmt.Printf("O número %d é par.\n", n)
	} else {

		fmt.Printf("O número %d é ímpar.\n", n)
	}
}
