/*Crie uma matriz A3x3 de booleanos e preencha cada posição
aleatoriamente. Crie uma matriz B3x3 de inteiros e preencha cada
posição com valores aleatórios entre 1 e 100. Depois, calcule a
seguinte fórmula:
 Σ    Σ
𝑖=1 𝑗=1 𝐵𝑖𝑗 , ∀ 𝑖 = 1, … , 3 𝑒 𝑗 = 1, … , 3 | 𝐴𝑖𝑗 = true
*/

package main

import (
	"fmt"
	"math/rand"
	"time"
)

func main() {

	var A [3][3]int
	var B [3][3]int

	maxB := 100
	minB := 1

	sum := 0

	rand.Seed(time.Now().UnixNano())

	for i := 0; i < 3; i++ {
		for j := 0; j < 3; j++ {
			A[i][j] = rand.Intn(2)
		}
	}

	for i := 0; i < 3; i++ {
		for j := 0; j < 3; j++ {
			fmt.Printf("%d ", A[i][j])
		}
		fmt.Println()
	}

	fmt.Println()

	for i := 0; i < 3; i++ {
		for j := 0; j < 3; j++ {
			B[i][j] = rand.Intn(maxB-minB+1) + minB
		}
	}

	for i := 0; i < 3; i++ {
		for j := 0; j < 3; j++ {
			fmt.Printf("%d ", B[i][j])
		}
		fmt.Println()
	}

	for i := 0; i < 3; i++ {
		for j := 0; j < 3; j++ {
			if A[i][j] == 1 {
				sum += B[i][j]
			}
		}
	}

	fmt.Printf("\nValor da soma: %d\n", sum)
}
