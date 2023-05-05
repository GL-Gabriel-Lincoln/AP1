/*Escreva um programa em C que calcule a idade de uma pessoa em
anos, meses e dias. O programa deve ler a data de nascimento da
pessoa (dia, mês e ano) e a data atual (dia, mês e ano) e imprimir a
idade na tela. Para este exercício, assuma que todos os meses
possuem exatamente 30 dias.*/

package main

import "fmt"

func main() {

	birthDay, birthMonth, birthYear := 0, 0, 0
	currentDay, currentMonth, currentYear := 0, 0, 0
	ageDay, ageMonth, ageYear := 0, 0, 0

	fmt.Println("Informe a data de nascimento da pessoa: xx xx xxxx ")
	fmt.Scanf("%d %d %d", &birthDay, &birthMonth, &birthYear)

	fmt.Println("Informe a data atual: xx xx xxxx ")
	fmt.Scanf("%d %d %d", &currentDay, &currentMonth, &currentYear)

	ageDay = currentDay - birthDay
	ageMonth = currentMonth - birthMonth
	ageYear = currentYear - birthYear

	if ageDay < 0 {
		ageDay = 30 + ageDay
		ageMonth = ageMonth - 1
	}

	if ageMonth < 0 {
		ageMonth = 12 + ageMonth
		ageYear = ageYear - 1
	}

	fmt.Printf("Idade: Ano %d, Mês %d, Dia %d\n", ageYear, ageMonth, ageDay)
}
