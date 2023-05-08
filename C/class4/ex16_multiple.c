/*Faça um programa que leia dois números inteiros e informe se o
primeiro é múltiplo do segundo ou se o segundo é múltiplo do
primeiro.*/

#include <stdio.h>

int main() {

    int n1, n2;

    printf("Digite 2 números: x x ");
    scanf("%d %d", &n1, &n2);

    if(n1 % n2 == 0) {

        printf("O primeiro número é múltiplo do segundo\n");
    }

    else if(n2 % n1 == 0) {

        printf("O segundo número é múltiplo do primeiro\n");
    }

    return 0;
}