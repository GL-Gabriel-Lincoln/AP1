/*Construa um programa em C que recebe um vetor V de 5 elementos
do usuário e imprime na tela o maior elemento do vetor.*/

package main

import "fmt"

func main() {

	v := [5]int{}
	majorElement := 0

	for i := 0; i < 5; i++ {

		fmt.Printf("Informe elemento %d do vetor: ", i+1)
		fmt.Scan(&v[i])
	}

	majorElement = v[0]

	for i := 0; i < 5; i++ {

		if v[i] > majorElement {

			majorElement = v[i]
		}
	}

	fmt.Printf("\n\nElemento maior: %d\n", majorElement)
}
