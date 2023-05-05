/*Desenvolva o código em C de um programa que solicita um número
inteiro 𝑛 do usuário e então imprime na tela a somatória de todos os
números pares inteiros no intervalo fechado [1, 𝑛].*/

package main

import "fmt"

func main() {

	var n, sum int

	fmt.Print("Digite um número inteiro: ")
	fmt.Scan(&n)

	for i := 1; i <= n; i++ {

		if i%2 == 0 {

			sum += i
		}
	}

	fmt.Printf("Somatória de todos os números pares inteiros: %d\n", sum)
}
