/*Escreva um programa em C que calcule o perímetro e a área de um
retângulo de base 10 e altura 5 e imprima os resultados na tela.*/

package main

import "fmt"

func main() {

	base := 10
	height := 5

	perimeter := 2*base + 2*height

	area := base * height

	fmt.Printf("Perimetro: %d\n", perimeter)
	fmt.Printf("Area: %d\n", area)
}
