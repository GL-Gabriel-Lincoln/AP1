/*Escreva um programa em C que leia um número inteiro e verifique se
ele é par ou ímpar. O programa deve imprimir na tela uma mensagem
informando se o número é par ou ímpar.*/

#include <stdio.h>

int main() {

    int n;

    printf("Digite um número inteiro n: ");
    scanf("%d", &n);

    if (n % 2 == 0) {
        printf("O número %d é par.\n", n);
    } else {
        printf("O número %d é ímpar.\n", n);
    }

    return 0;
}