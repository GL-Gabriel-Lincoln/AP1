/*Desenvolva o código em C para calcular o IMC (índice de massa
corpórea) de uma pessoa (peso/altura²).*/

package main

import "fmt"

func main() {

	var weight float32
	var height float32
	var bmi float32

	fmt.Print("Digite o peso(kg): ")
	fmt.Scanf("%f", &weight)

	fmt.Print("Digite a altura(m): ")
	fmt.Scanf("%f", &height)

	bmi = weight / (height * height)

	fmt.Printf("O IMC é: %f\n", bmi)

}
