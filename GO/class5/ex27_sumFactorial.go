/*Desenvolva um programa em C que recebe um valor inteiro 𝑛 e
imprima na tela o valor da seguinte fórmula:
1/1! + 1/2! + ⋯ + 1/𝑛!*/

package main

import "fmt"

func main() {

	var n int
	var factorial = 1
	var sum = 0.0

	fmt.Print("Digite um valor inteiro: ")
	fmt.Scan(&n)

	for i := 1; i <= n; i++ {

		factorial *= i
		sum += 1.0 / float64(factorial)
	}

	fmt.Printf("Resultado da seguinte fórmula: %f\n", sum)
}
