/*Escreva um programa em C que leia dois números inteiros e imprima
na tela a soma, subtração, multiplicação e divisão dos dois números.*/

#include <stdio.h>

int main() {
    
    int n1, n2; 
    int sum, subtraction, multiplication;
    float division;

    printf("Digite um número inteiro: ");
    scanf("%d", &n1);

    printf("Digite outro número inteiro: ");
    scanf("%d", &n2);

    sum = n1 + n2;
    subtraction = n1 - n2;
    multiplication = n1 * n2;
    division = (float) n1 / n2;

    printf("O resultado da soma é: %d\n", sum);
    printf("O resultado da subtração é: %d\n", subtraction);
    printf("O resultado da multiplicação é: %d\n", multiplication);
    printf("O resultado da divisão é: %.2f\n", division);
   
    return 0;
}