/*Escreva um programa em C que calcule a média aritmética de três
números inteiros e imprima o resultado na tela.*/

#include <stdio.h>

int main() {

    int n1, n2, n3;
    int average;

    printf("Insira 3 números\n");

    printf("Digite um número inteiro: ");
    scanf("%d", &n1);

    printf("Digite outro número inteiro: ");
    scanf("%d", &n2);

    printf("Digite outro número inteiro: ");
    scanf("%d", &n3);

    average = (n1 + n2 + n3) / 3;

    printf("O média aritmética dos números inseridos é %d.\n", average);

    return 0;
}

