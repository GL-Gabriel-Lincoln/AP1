/*Escreva um programa em C que leia dois números inteiros e imprima
na tela a soma, subtração, multiplicação e divisão dos dois números.*/

package main

import "fmt"

func main() {
	var n1, n2 int
	var sum, subtraction, multiplication int
	var division float32

	fmt.Println("Digite um número inteiro: ")
	fmt.Scanln(&n1)

	fmt.Println("Digite outro número inteiro: ")
	fmt.Scanln(&n2)

	sum = n1 + n2
	subtraction = n1 - n2
	multiplication = n1 * n2
	division = float32(n1) / float32(n2)

	fmt.Printf("O resultado da soma é: %d\n", sum)
	fmt.Printf("O resultado da subtração é: %d\n", subtraction)
	fmt.Printf("O resultado da multiplicação é: %d\n", multiplication)
	fmt.Printf("O resultado da divisão é: %.2f\n", division)
}
