/*Desenvolva o pseudocódigo e o código em C de um programa que lê
duas variáveis inteiras x e y, compara os valores lidos e imprime todas
as relações verdadeiras entre elas (>, <, >=, <=, !=, ==).*/

package main

import "fmt"

func main() {

	var x, y int

	fmt.Print("Digite um valor inteiro x: ")
	fmt.Scan(&x)

	fmt.Print("Digite um valor inteiro y: ")
	fmt.Scan(&y)

	if x > y {

		fmt.Println("x é maior que y")
	}
	if x < y {

		fmt.Println("x é menor que y")
	}
	if x >= y {

		fmt.Println("x é maior ou igual a y")
	}
	if x <= y {

		fmt.Println("x é menor ou igual a y")
	}
	if x != y {

		fmt.Println("x é diferente de y")
	}
	if x == y {

		fmt.Println("x é igual a y")
	}
}
