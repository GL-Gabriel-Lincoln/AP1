/*Desenvolva um programa em C que calcule a seguinte formula:
𝑓 𝑥 =                  1, 𝑥 = 1
            2 + 𝑓(𝑥 − 1), 𝑥 > 1*/

package main

import "fmt"

func main() {

	var x, f int = 0, 1

	fmt.Print("Digite um valor para x: ")
	fmt.Scan(&x)

	if x == 1 {

		f = 1
	} else if x > 1 {

		for i := 1; i < x; i++ {

			f += 2
		}
	}

	fmt.Printf("O valor de f(x) é %d\n", f)
}
