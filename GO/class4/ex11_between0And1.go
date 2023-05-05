/*Desenvolva o código em C de um programa que recebe uma variável
real x e imprime na tela se o valor recebido está entre 0 e 1.*/

package main

import "fmt"

func main() {

	var x float32

	fmt.Printf("Digite um numero real x: ")
	fmt.Scan(&x)

	if x >= 0 && x <= 1 {

		fmt.Printf("O valor recebido está entre 0 e 1.\n")
	} else {

		fmt.Printf("O valor recebido não está entre 0 e 1.\n")
	}
}
