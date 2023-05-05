/*Faça um programa que lê uma data no formato DD/MM/AA e verifica
se ela é válida. Desconsidere anos bissextos.*/

package main

import "fmt"

func main() {

	var day, month, year int

	fmt.Println("Digite uma data: DD MM AAAA ")
	fmt.Scanf("%d %d %d", &day, &month, &year)

	if (day < 01 || day > 31) || (month < 01 || month > 12) || (year < 0000 || year > 9999) {

		fmt.Println("Data invalida")
		return
	}
	if (month == 4 || month == 6 || month == 9 || month == 11) && day > 30 {

		fmt.Println("Data invalida")
		return
	} else if month == 2 && day > 28 {

		fmt.Println("Data invalida")
		return
	}

	fmt.Println("Data valida")
}
