/*Crie uma matriz A 10x10 de inteiros e preencha cada posição com um
valor aleatório entre 0 e 10. Depois, imprima a matriz na tela e
imprima a média de cada linha e a média de cada coluna.*/

package main

import (
	"fmt"
	"math/rand"
	"time"
)

func main() {

	var A [10][10]int
	var mediaLine float32 = 0
	var mediaColumn float32 = 0

	rand.Seed(time.Now().UnixNano())

	for i := 0; i < 10; i++ {
		for j := 0; j < 10; j++ {

			A[i][j] = rand.Intn(11)
		}
	}

	for i := 0; i < 10; i++ {
		for j := 0; j < 10; j++ {

			fmt.Printf("%d ", A[i][j])
		}
		fmt.Printf("\n")
	}

	for i := 0; i < 10; i++ {
		for j := 0; j < 10; j++ {

			mediaLine += float32(A[i][j])
			mediaColumn += float32(A[j][i])
		}

		mediaLine /= 10
		mediaColumn /= 10

		fmt.Printf("\n\nMedia linha %d: %.2f\n", i+1, mediaLine)
		fmt.Printf("\n\nMedia coluna %d: %.2f\n", i+1, mediaColumn)
	}
}
