/*Escreva um programa em C que calcule a média aritmética de três
números inteiros e imprima o resultado na tela.*/

package main

import "fmt"

func main() {
	var n1, n2, n3 int
	var average int

	fmt.Println("Insira 3 números")
	fmt.Print("Digite um número inteiro: ")
	fmt.Scan(&n1)
	fmt.Print("Digite outro número inteiro: ")
	fmt.Scan(&n2)
	fmt.Print("Digite outro número inteiro: ")
	fmt.Scan(&n3)

	average = (n1 + n2 + n3) / 3

	fmt.Printf("A média aritmética dos números inseridos é %d.\n", average)
}
