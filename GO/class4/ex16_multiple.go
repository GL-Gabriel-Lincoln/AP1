/*Faça um programa que leia dois números inteiros e informe se o
primeiro é múltiplo do segundo ou se o segundo é múltiplo do
primeiro.*/

package main

import "fmt"

func main() {

	var n1, n2 int

	fmt.Printf("Digite 2 números: x x ")
	fmt.Scan(&n1, &n2)

	if n1%n2 == 0 {

		fmt.Printf("O primeiro número é múltiplo do segundo\n")
	} else if n2%n1 == 0 {

		fmt.Printf("O segundo número é múltiplo do primeiro\n")
	}
}
