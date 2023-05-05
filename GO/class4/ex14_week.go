/*Faça um programa que leia um número inteiro entre 1 e 7 e exiba o
dia da semana correspondente (1 - segunda-feira, 2 - terça-feira, etc.).*/

package main

import "fmt"

func main() {

	var n int

	fmt.Print("Digite um número inteiro entre 1 e 7: ")
	fmt.Scan(&n)

	if n == 1 {

		fmt.Println("segunda-feira")
	}
	if n == 2 {

		fmt.Println("terça-feira")
	}
	if n == 3 {

		fmt.Println("quarta-feira")
	}
	if n == 4 {

		fmt.Println("quinta-feira")
	}
	if n == 5 {

		fmt.Println("sexta-feira")
	}
	if n == 6 {

		fmt.Println("sábado")
	}
	if n == 7 {

		fmt.Println("domingo")
	}
}
