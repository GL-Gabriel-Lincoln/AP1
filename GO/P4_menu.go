/*Faça um programa que lê um número inteiro da tela e então exibe um menu com quatro opções:
1) Verificar se é par; 2) Verificar se é ímpar; 3) Verificar se é primo; 4) Sair.
O programa deve fazer a verificação escolhida pelo o usuário ou encerrar caso a opção 4 seja a escolhida.
Caso alguma das verificações seja feita, o programa deve pedir novamente um novo número e apresenar novamente o menu.
Sendo assim, o programa só será encerrado caso a opção 4 seja escolhida.*/

// Dupla: Gabriel Lincoln e William Gabriel
// Programador: Gabriel Lincoln
// Supervisor: William Gabriel
// Comando de compilar: go run P4_menu.go

package main

import "fmt"

func main() {

	var option int
	var n int
	counter := 0

	for {

		fmt.Print("\nDigite um número: ")
		fmt.Scan(&n)

		fmt.Print("\n")

		fmt.Println("Menu de opções:")
		fmt.Println("1) Verificar se é par")
		fmt.Println("2) Verificar se é ímpar")
		fmt.Println("3) Verificar se é primo")
		fmt.Println("4) Sair")
		fmt.Print("Opcão: ")
		fmt.Scan(&option)

		fmt.Print("\n")

		if option == 1 {

			if n%2 == 0 {

				fmt.Println("O número é par")
			} else {

				fmt.Println("O número não é par")
			}
		}
		if option == 2 {

			if n%2 == 1 {

				fmt.Println("O número é impar")
			} else {

				fmt.Println("O número não é impar")
			}
		}
		if option == 3 {

			for i := 2; i <= n/2; i++ {

				if n%i == 0 {

					counter++
				}
			}

			if counter == 0 {

				fmt.Printf("O número %d é primo\n", n)
			} else {

				fmt.Printf("O número %d não é primo\n", n)
			}
		}
		if option == 4 {

			break
		}
	}
}
