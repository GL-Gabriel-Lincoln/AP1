/*Faça um programa que leia três números inteiros e exiba-os em
ordem crescente.*/

package main

import "fmt"

func main() {

	var n1, n2, n3 int

	fmt.Print("Digite 3 números: x x x ")
	fmt.Scanf("%d %d %d", &n1, &n2, &n3)

	if n1 <= n2 && n2 <= n3 {

		fmt.Printf("a ordem crescente é %d, %d e %d\n", n1, n2, n3)
	} else if n1 <= n3 && n3 <= n2 {

		fmt.Printf("a ordem crescente é %d, %d e %d\n", n1, n3, n2)
	} else if n2 <= n1 && n1 <= n3 {

		fmt.Printf("a ordem crescente é %d, %d e %d\n", n2, n1, n3)
	} else if n2 <= n3 && n3 <= n1 {

		fmt.Printf("a ordem crescente é %d, %d e %d\n", n2, n3, n1)
	} else if n3 <= n1 && n1 <= n2 {

		fmt.Printf("a ordem crescente é %d, %d e %d\n", n3, n1, n2)
	} else if n3 <= n2 && n2 <= n1 {

		fmt.Printf("a ordem crescente é %d, %d e %d\n", n3, n2, n1)
	}
}
