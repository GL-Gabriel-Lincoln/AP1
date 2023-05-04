/*Escreva um programa em C que leia o valor de duas variáveis inteiras
a e b e troque o valor delas. Ou seja, o valor de a deve ser igual ao
valor de b e o valor de b deve ser igual ao valor de a. O programa
deve imprimir os valores atualizados das variáveis na tela.*/

package main

import "fmt"

func main() {

	var a, b, varvelauxiliary int

	fmt.Print("Digite o valor da variavel A: ")
	fmt.Scan(&a)

	fmt.Print("Digite o valor da variavel B: ")
	fmt.Scan(&b)

	varvelauxiliary = a
	a = b
	b = varvelauxiliary

	fmt.Printf("O valor de A é: %d\n", a)

	fmt.Printf("O valor de B é: %d\n", b)
}
