/*Faça um programa que leia um vetor de 10 posições do usuário. No
final, o programa deve exibir o maior e o menor elemento do vetor.
Além disso, o programa também deve exibir a soma dos números
pares, a soma dos números ímpares e a soma dos números primos do
vetor.*/

package main

import "fmt"

func main() {

	v := [10]int{}
	greatestElement := v[0]
	smallestElement := v[0]
	sumOfEvens := 0
	sumOfOdds := 0
	sumOfPrimes := 0
	counter := 0

	for i := 0; i < 10; i++ {

		fmt.Printf("Digite o elemento %d: ", i+1)
		fmt.Scan(&v[i])
	}

	for i := 0; i < 10; i++ {

		if v[i] > greatestElement {

			greatestElement = v[i]
		}

		if v[i] < smallestElement {

			smallestElement = v[i]
		}

		if v[i]%2 == 0 {

			sumOfEvens += v[i]
		} else {

			sumOfOdds += v[i]
		}
	}

	for i := 0; i < 10; i++ {

		if v[i] == 2 {

			counter = 0
		} else if v[i]%2 == 0 {

			counter++
		}

		if counter == 0 {

			sumOfPrimes += v[i]
		} else {

			counter--
		}
	}

	fmt.Printf("Maior elemento: %d\n", greatestElement)
	fmt.Printf("Menor elemento: %d\n", smallestElement)
	fmt.Printf("Soma dos pares: %d\n", sumOfEvens)
	fmt.Printf("Soma dos impares: %d\n", sumOfOdds)
	fmt.Printf("Soma dos primos: %d\n", sumOfPrimes)
}
