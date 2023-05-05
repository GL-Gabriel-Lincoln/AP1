package main

import (
	"fmt"
	"math"
)

func main() {

	var n int
	var summation int = 0
	var producer float64 = 1
	var result float64

	fmt.Println("Digite um valor para n: ")
	fmt.Scanln(&n)

	for i := 1; i <= n; i++ {

		summation += i
	}

	for i := 1; i <= n/2; i++ {

		producer *= math.Sqrt(float64(i))
	}

	result = producer + float64(summation)

	fmt.Printf("Resultado de %d é %f\n", n, result)
}
