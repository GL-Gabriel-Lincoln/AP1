/*Crie um programa que lê um vetor V com 10 posições de booleanos
do usuário. O programa deve exibir a conversão da representação
binária do vetor para um número decimal na tela.*/

package main

import (
	"fmt"
	"math"
)

func main() {

	V := [10]int{}
	decimalNumber := 0

	for i := 0; i < 10; i++ {

		fmt.Printf("%d - Digite 0 ou 1: ", i+1)
		fmt.Scan(&V[i])

		decimalNumber += V[i] * int(math.Pow(2, float64(9-i)))
	}

	fmt.Printf("\nO número em decimal equivale a %d\n", decimalNumber)
}
