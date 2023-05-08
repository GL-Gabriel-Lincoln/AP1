/*Desenvolva o código em C utilizando funções e procedimentos de um
programa que recebe um valor inteiro 𝑛 e imprima na tela o valor da
seguinte fórmula:
1 + 1/1! + 1/2! + ⋯ + 1/𝑛!*/

#include <stdio.h>
double sum_of_1_over_n_factorial(int n) {

    int factorial = 1;
    double sum = 0;

    for(int i = 1; i <= n; i++) {

        factorial *= i;
        sum += 1.0 / factorial;
    }
        
    return sum;
}

int main() {

    int n;

    printf("Digite um valor inteiro: ");
    scanf("%d", &n);
    
    printf("Resultado da seguinte fórmula: %lf\n", sum_of_1_over_n_factorial(n));

    return 0;
}