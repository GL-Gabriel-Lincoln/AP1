/*Faça um programa que leia um número inteiro entre 1 e 7 e exiba o
dia da semana correspondente (1 - segunda-feira, 2 - terça-feira, etc.).*/

#include <stdio.h>

int main() {

    int n;

    printf("Digite um número inteiro entre 1 e 7: ");
    scanf("%d", &n);

    if (n == 1) {

        printf("segunda-feira\n");
    }
    if (n == 2) {

        printf("terça-feira\n");
    }
    if (n == 3) {

        printf("quarta-feira\n");
    }
    if (n == 4) {

        printf("quinta-feira\n");
    }
    if (n == 5) {

        printf("sexta-feira\n");
    }
    if (n == 6) {

        printf("sábado\n");
    }
    if (n == 7) {

        printf("domingo\n");
    }

    return 0;
}