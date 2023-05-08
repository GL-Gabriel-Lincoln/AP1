/*Faça um programa que leia duas matrizes 3x3 da tela e imprima o
resultado da multiplicação entre elas.*/

package main

import "fmt"

func main() {

	var matrix1 [3][3]int
	var matrix2 [3][3]int
	var result [3][3]int

	for i := 0; i < 3; i++ {
		for j := 0; j < 3; j++ {

			fmt.Printf("Digite a matriz 1[%d][%d]: ", i, j)
			fmt.Scan(&matrix1[i][j])
		}
	}

	fmt.Println()

	for i := 0; i < 3; i++ {
		for j := 0; j < 3; j++ {

			fmt.Printf("Digite a matriz 2[%d][%d]: ", i, j)
			fmt.Scan(&matrix2[i][j])

			result[i][j] = matrix1[i][j] * matrix2[i][j]
		}
	}

	fmt.Println()

	for i := 0; i < 3; i++ {
		for j := 0; j < 3; j++ {

			fmt.Printf("Resultado[%d][%d] = matriz 1[%d][%d] * matriz 2[%d][%d] = %d\n", i, j, i, j, i, j, result[i][j])
		}
	}
}
