/*Suponha uma empresa com 5 funcionários onde cada um tem um
salário de 100, 50, 50, 120 e 30 reais respectivamente. Quanto a
empresa gasta em salários no total?*/

package main

import "fmt"

func main() {
	salaries := [5]int{100, 50, 50, 120, 30}
	totalSalaries := 0

	for i := 0; i < 5; i++ {

		totalSalaries += salaries[i]
	}

	fmt.Printf("Salarios ao total: %d\n", totalSalaries)
}
