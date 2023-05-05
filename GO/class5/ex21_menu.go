/*Desenvolva o código em C de um programa que imprime na tela um
menu onde o usuário poderá escolher entre: (1) Opção 1, (2) Opção
2, (3) Opção 3, (4) sair. Caso a opção (4) seja escolhida o programa
deve encerrar. Caso qualquer outra opção seja escolhida o programa
deve imprimir na tela o menu novamente.*/

package main

import "fmt"

func main() {

	var option int

	for {

		fmt.Println("Menu de opções:")
		fmt.Println("(1) Opção 1")
		fmt.Println("(2) Opção 2")
		fmt.Println("(3) Opção 3")
		fmt.Println("(4) Sair")
		fmt.Scan(&option)

		if option == 4 {
			break
		}
	}
}
