/*Desenvolva o código em C de um programa que recebe uma variável
inteira 𝑛 e imprime na tela o valor de 𝑛!*/

package main

import "fmt"

func main() {

	var n int
	factorial := 1

	fmt.Print("Digite um número fatorial: ")
	fmt.Scan(&n)

	for i := 1; i <= n; i++ {

		factorial *= i
	}

	fmt.Printf("O fatorial de %d é %d\n", n, factorial)
}
