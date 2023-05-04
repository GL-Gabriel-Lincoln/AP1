/*Escreva um programa em C que converta uma temperatura em graus
Celsius para Fahrenheit. A fórmula para conversão é: Fahrenheit =
(Celsius * 9/5) + 32. O programa deve ler a temperatura em Celsius do
usuário e imprimir o resultado na tela.*/

package main

import "fmt"

func main() {

	var celsius, fahrenheit float64

	fmt.Print("Informe a temperatura em Celsius: ")
	fmt.Scan(&celsius)

	fahrenheit = (celsius * 9 / 5) + 32

	fmt.Printf("Temperatura em Fahrenheit: %.2f\n", fahrenheit)
}
