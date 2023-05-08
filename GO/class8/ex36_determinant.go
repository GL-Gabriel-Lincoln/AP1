/*Seja uma matriz A3x3 informada pelo usuário. Calcule e imprima na
tela o determinante de A.*/

package main

import "fmt"

func main() {

	var A [3][3]int
	var determinantA int

	for i := 0; i < 3; i++ {
		for j := 0; j < 3; j++ {

			fmt.Printf("Digite o A[%d][%d]: ", i+1, j+1)
			fmt.Scanf("%d", &A[i][j])
		}
	}

	determinantA = ((A[0][0] * A[1][1] * A[2][2]) + (A[0][1] * A[1][2] * A[2][0]) + (A[0][2] * A[1][0] * A[2][1])) -
		((A[0][2] * A[1][1] * A[2][0]) + (A[0][0] * A[1][2] * A[2][1]) + (A[0][1] * A[1][0] * A[2][2]))

	fmt.Printf("O determinante de A é: %d\n", determinantA)
}
