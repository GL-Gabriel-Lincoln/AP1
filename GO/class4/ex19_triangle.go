/*Faça um programa que leia três coordenadas (x, y) e informa se elas
formam um triângulo. Dica: é necessário calcular a distância entre
elas.*/

package main

import (
	"fmt"
	"math"
)

func main() {

	var x1, y1 float32
	var x2, y2 float32
	var x3, y3 float32
	var distance12, distance23, distance31 float32

	fmt.Println("Informe primeira coordenada: x1 y1 ")
	fmt.Scanln(&x1, &y1)

	fmt.Println("Informe segunda coordenada: x2 y2 ")
	fmt.Scanln(&x2, &y2)

	fmt.Println("Informe terceira coordenada: x3 y3 ")
	fmt.Scanln(&x3, &y3)

	distance12 = float32(math.Sqrt(math.Pow(float64(x1-x2), 2) + math.Pow(float64(y1-y2), 2)))
	distance23 = float32(math.Sqrt(math.Pow(float64(x2-x3), 2) + math.Pow(float64(y2-y3), 2)))
	distance31 = float32(math.Sqrt(math.Pow(float64(x3-x1), 2) + math.Pow(float64(y3-y1), 2)))

	if (distance12+distance23 > distance31) && (distance23+distance31 > distance12) && (distance31+distance12 > distance23) {

		fmt.Println("Triângulo formam um triângulo.")
	} else {

		fmt.Println("Triângulo não formam um triângulo.")
	}
}
