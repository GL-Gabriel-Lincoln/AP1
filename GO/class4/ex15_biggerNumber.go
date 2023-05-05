/*Faça um programa que leia três números inteiros e exiba o maior
deles.*/

package main

import "fmt"

func main() {

	var n1, n2, n3 int

	fmt.Println("Digite 3 números inteiros: x x x ")
	fmt.Scanf("%d %d %d", &n1, &n2, &n3)

	if (n1 >= n2 && n2 >= n3) || (n1 >= n3 && n3 >= n2) {

		fmt.Printf("O número %d é o maior\n", n1)
	} else if (n2 >= n1 && n1 >= n3) || (n2 >= n3 && n3 >= n1) {

		fmt.Printf("O número %d é o maior\n", n2)
	} else if (n3 >= n1 && n1 >= n2) || (n3 >= n2 && n2 >= n1) {

		fmt.Printf("O número %d é o maior\n", n3)
	}
}
