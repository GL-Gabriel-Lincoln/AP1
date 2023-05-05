/*Faça uma função que imprime na tela todos os divisores inteiros de um número n recebido por parâmetro.
Teste a função fazendo uma chamada na main lendo n do terminal.*/

// Dupla: Gabriel Lincoln e William Gabriel
// Programador: William Gabriel
// Supervisor: Gabriel Lincoln
// Comando de compilar: go run P4_numberDividers.go

package main

import "fmt"

func numberDividers(n int) {

	for i := 1; i <= n; i++ {

		if n%i == 0 {

			fmt.Printf("\n%d é divisor de %d\n", i, n)
		}
	}

}

func main() {

	var n int

	fmt.Print("Digite um numero: ")
	fmt.Scan(&n)

	numberDividers(n)
}
