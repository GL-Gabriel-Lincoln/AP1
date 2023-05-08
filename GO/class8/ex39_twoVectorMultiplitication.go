/*Faça um programa que leia dois vetores tridimensionais do usuário.
Depois, imprima a multiplicação escalar dos vetores.*/

package main

import "fmt"

func main() {

	v1 := [3]int{}
	v2 := [3]int{}
	multiplication := [3]int{}
	result := 0

	for i := 0; i < 3; i++ {
		if i == 0 {
			fmt.Print("Vetor1 - Digite o elemento x: ")
			fmt.Scan(&v1[i])
		}
		if i == 1 {
			fmt.Print("Vetor1 - Digite o elemento y: ")
			fmt.Scan(&v1[i])
		}
		if i == 2 {
			fmt.Print("Vetor1 - Digite o elemento z: ")
			fmt.Scan(&v1[i])

			fmt.Println()
		}
	}

	for i := 0; i < 3; i++ {
		if i == 0 {
			fmt.Print("Vetor2 - Digite o elemento x: ")
			fmt.Scan(&v2[i])
		}
		if i == 1 {
			fmt.Print("Vetor2 - Digite o elemento y: ")
			fmt.Scan(&v2[i])
		}
		if i == 2 {
			fmt.Print("Vetor2 - Digite o elemento z: ")
			fmt.Scan(&v2[i])

			fmt.Println()
		}

		multiplication[i] = v1[i] * v2[i]

		result += multiplication[i]
	}

	fmt.Printf("Resultado da multiplicação escalar: %d\n", result)
}
