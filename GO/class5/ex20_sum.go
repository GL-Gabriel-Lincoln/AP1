/*Desenvolva o código em C de um programa que soma números
inteiros informados pelo usuário até que um número negativo seja
informado e então imprime o resultado da soma na tela.*/

package main

import "fmt"

func main() {

	var n int
	sum := 0

	fmt.Print("Digite um número: ")
	fmt.Scanln(&n)

	for n >= 0 {

		sum += n

		fmt.Print("Digite um número: ")
		fmt.Scanln(&n)

		if n < 0 {

			sum += n
			fmt.Printf("O resultado da soma é %d\n", sum)
		}
	}
}
