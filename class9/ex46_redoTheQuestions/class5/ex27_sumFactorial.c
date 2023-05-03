/*Desenvolva um programa em C que recebe um valor inteiro 𝑛 e
imprima na tela o valor da seguinte fórmula:
1/1! + 1/2! + ⋯ + 1/𝑛!*/

#include <stdio.h>

int main() {

    int n;
    int factorial = 1;
    double sum = 0;

    printf("Digite um valor inteiro: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {

        factorial *= i;
        sum += 1.0 / factorial;
    }

    printf("Resultado da seguinte fórmula: %lf\n", sum);

    return 0;
}