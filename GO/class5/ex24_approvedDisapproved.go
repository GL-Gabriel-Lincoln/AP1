/*Desenvolva o código em C de um programa em que o usuário informa
a nota de 𝑛 alunos e o programa conta quantos alunos foram
aprovados (nota ≥ 6) e quantos alunos foram reprovados (nota < 6).*/

package main

import "fmt"

func main() {

	var n int
	var note float32
	var approved, disapproved int

	fmt.Print("Digite quantos alunos tem: ")
	fmt.Scanln(&n)

	fmt.Println("Digite a nota dos alunos")

	for i := 1; i <= n; i++ {

		fmt.Printf("Aluno %d: \n", i)
		fmt.Scanln(&note)

		if note >= 6 {

			approved++
		} else if note < 6 {

			disapproved++
		}
	}

	fmt.Printf("Alunos aprovados: %d\n", approved)
	fmt.Printf("Alunos reprovados: %d\n", disapproved)
}
