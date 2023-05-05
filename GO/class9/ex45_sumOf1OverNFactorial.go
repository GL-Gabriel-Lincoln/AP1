/*Desenvolva o código em C utilizando funções e procedimentos de um
programa que recebe um valor inteiro 𝑛 e imprima na tela o valor da
seguinte fórmula:
1 + 1/1! + 1/2! + ⋯ + 1/𝑛!*/

package main

import "fmt"

func sum_of_1_over_n_factorial(n int) float64 {

	factorial := 1
	sum := 0.0

	for i := 1; i <= n; i++ {

		factorial *= i
		sum += 1.0 / float64(factorial)
	}

	return sum
}

func main() {

	var n int

	fmt.Printf("Digite um valor inteiro: ")
	fmt.Scan(&n)

	fmt.Printf("Resultado da seguinte fórmula: %f\n", sum_of_1_over_n_factorial(n))
}
