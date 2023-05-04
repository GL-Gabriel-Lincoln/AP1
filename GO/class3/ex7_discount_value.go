/*Escreva um programa em C que leia o valor de um produto e calcule o
valor final com desconto de 10%. O programa deve imprimir o valor
final na tela.*/

package main

import "fmt"

func main() {

	var productValue, finalProductValue float32

	fmt.Print("Informe o valor de um produto: ")
	fmt.Scan(&productValue)

	finalProductValue = productValue - (productValue * 0.1)

	fmt.Printf("O valor final é: %.2f\n", finalProductValue)
}
