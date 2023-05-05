/*• Desenvolva o código em C de um programa que solicita um número
inteiro n do usuário e então imprime na tela o resultado da somatória
de todos os números de 0, 1, 2, ..., n, como a fórmula a seguir:
*/

package main

import "fmt"

func main() {

	var n int
	sum := 0

	fmt.Print("Digite um número: ")
	fmt.Scan(&n)

	for i := 0; i <= n; i++ {

		sum += i
	}

	fmt.Printf("O resultado da somatória de %d é %d\n", n, sum)
}
