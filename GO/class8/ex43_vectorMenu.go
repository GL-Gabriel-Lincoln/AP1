/*Crie um programa que imprima um menu para o usuário com três
opções. A primeira opção, o usuário irá informar um vetor de inteiros
de tamanho 10. Na segunda opção, o usuário irá buscar um
determinado número no vetor e o programa irá imprimir na tela se o
valor está presente no vetor ou não. Na terceira opção, o programa
irá imprimir o menor valor, o maior valor e a soma dos valores do
vetor.*/

package main

import "fmt"

func main() {

	var option int
	vector := make([]int, 10)
	var biggestVectorElement int
	var smallestVectorElement int
	var sumOfVectorElements int
	var numberLookingForInVector int

	for {
		fmt.Println("=======================================================================================================")
		fmt.Println("\nMENU OPÇÕES")
		fmt.Println("1: Informar um vetor de inteiros de tamanho 10")
		fmt.Println("2: Buscar um determinado número no vetor para verifica se o valor está presente no vetor ou não")
		fmt.Println("3: Imprimir o menor valor, o maior valor e a soma dos valores do vetor")
		fmt.Println("0: Sair do programa")
		fmt.Print("Digite a opcão escolhida: ")
		fmt.Scanln(&option)

		fmt.Println("\n=======================================================================================================")

		if option == 1 {

			fmt.Println("\nOpção 1:")

			for i := 0; i < 10; i++ {

				fmt.Printf("Digite o elemento %d do Vetor: ", i+1)
				fmt.Scanln(&vector[i])
			}
			fmt.Println()
		}

		if option == 2 {

			fmt.Println("\nOpção 2:")

			fmt.Print("Informe um número para buscar no vetor: ")
			fmt.Scanln(&numberLookingForInVector)

			fmt.Println()

			counter := 0

			for i := 0; i < 10; i++ {

				if vector[i] == numberLookingForInVector {
					counter++
				}
			}

			if counter > 0 {

				fmt.Printf("O vetor tem o valor %d\n\n", numberLookingForInVector)
			} else {

				fmt.Printf("O vetor não tem o valor %d\n\n", numberLookingForInVector)
			}
		}

		if option == 3 {

			fmt.Println("\nOpção 3:")

			biggestVectorElement = vector[0]
			smallestVectorElement = vector[0]

			for i := 0; i < 10; i++ {

				if vector[i] > biggestVectorElement {

					biggestVectorElement = vector[i]
				}

				if vector[i] < smallestVectorElement {

					smallestVectorElement = vector[i]
				}
			}

			for i := 0; i < 10; i++ {

				sumOfVectorElements += vector[i]
			}

			fmt.Printf("Maior valor: %d\n", biggestVectorElement)
			fmt.Printf("Menor valor: %d\n", smallestVectorElement)
			fmt.Printf("Resultado soma dos elementos do vetor: %d\n\n", sumOfVectorElements)
		}

		if option == 0 {
			break
		}
	}
}
