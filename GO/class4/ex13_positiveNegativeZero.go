/*Faça um programa que leia um número inteiro e informe se ele é
positivo, negativo ou zero.*/

package main

import "fmt"

func main() {

	var n int

	fmt.Printf("Digite um número inteiro: ")
	fmt.Scan(&n)

	if n < 0 {

		fmt.Printf("O número %d é negativo.\n", n)
	} else if n > 0 {

		fmt.Printf("O número %d é positivo.\n", n)
	} else {

		fmt.Printf("O número %d é zero.\n", n)
	}
}
