/*Faça um programa que leia um número inteiro e informe se ele é
positivo, negativo ou zero.*/

#include <stdio.h>

int main() {

    int n;

    printf("Digite um número inteiro: ");
    scanf("%d", &n);

    if(n < 0) {

        printf("O número %d é negativo.\n", n);
    }
    else if(n >= 0) {

        printf("O número %d é positivo.\n", n);
    }
    else {

        printf("O número %d é zero.\n", n);
    }

    return 0;
}