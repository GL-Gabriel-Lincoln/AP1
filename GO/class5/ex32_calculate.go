/*Faça um programa em C que simule uma calculadora simplificada. O
programa deve exibir um menu que possibilite o usuário a escolher
entre as operações de soma, subtração, multiplicação, divisão e sair.
Caso a opção sair seja escolhida, o programa encerra. Caso qualquer
outra opção seja escolhida, o programa irá pedir ao usuário dois
operandos e realizar a respectiva operação.*/

package main

import "fmt"

func main() {

	var n1, n2 float32
	var option int

	for {

		fmt.Print("Informe o primeiro número: ")
		fmt.Scanln(&n1)

		fmt.Print("Informe o segundo número: ")
		fmt.Scanln(&n2)

		fmt.Println("Digite a opção que queira fazer:")
		fmt.Println("  1. adição")
		fmt.Println("  2. subtração")
		fmt.Println("  3. multiplicação")
		fmt.Println("  4. divisão")
		fmt.Println("  0. sair")
		fmt.Print("Opção: ")
		fmt.Scanln(&option)

		if option == 1 {

			fmt.Printf("Resultado: %.2f\n", n1+n2)
		} else if option == 2 {

			fmt.Printf("Resultado: %.2f\n", n1-n2)
		} else if option == 3 {

			fmt.Printf("Resultado: %.2f\n", n1*n2)
		} else if option == 4 {

			fmt.Printf("Resultado: %.2f\n", n1/n2)
		} else if option == 0 {

			break
		}
	}
}
