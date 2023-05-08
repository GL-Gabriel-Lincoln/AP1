/*Crie uma matriz A10x5 e preencha com valores aleatórios entre 1 e 10.
Posteriormente, imprima na tela os maiores valores de cada coluna.*/

package main

import (
	"fmt"
	"math/rand"
	"time"
)

func main() {
	
	var A [10][5]int
	maxA := 10
	minA := 1
	var V [5]int

	rand.Seed(time.Now().UnixNano())

	for i := 0; i < 10; i++ {
		for j := 0; j < 5; j++ {
			A[i][j] = rand.Intn(maxA-minA+1) + minA
		}
	}

	for i := 0; i < 10; i++ {
		for j := 0; j < 5; j++ {
			fmt.Printf("%d  ", A[i][j])
		}
		fmt.Println()
	}

	for j := 0; j < 5; j++ {
		maiorValor := A[0][j]
		for i := 1; i < 10; i++ {
			if A[i][j] >= maiorValor {
				maiorValor = A[i][j]
				V[j] = maiorValor
			} else {
				V[j] = maiorValor
			}
		}
	}
	for i := 0; i < 5; i++ {
		fmt.Printf("Maior valor da coluna %d: %d\n", i+1, V[i])
	}
}
