/*Escreva um programa em C que leia o valor do raio de um círculo e
calcule a circunferência e a área do círculo. A fórmula para calcular a
circunferência é: 2 * PI * raio e a fórmula para calcular a área é: PI *
raio * raio. O programa deve imprimir os resultados na tela.*/

package main

import "fmt"

const PI float32 = 3.14

func main() {

	var ray float32
	var circumference float32
	var area float32

	fmt.Print("Informe o valor do raio: ")
	fmt.Scan(&ray)

	circumference = 2 * PI * ray

	area = PI * (ray * ray)

	fmt.Printf("Circunferência: %.2f\n", circumference)
	fmt.Printf("Area: %.2f\n", area)
}
