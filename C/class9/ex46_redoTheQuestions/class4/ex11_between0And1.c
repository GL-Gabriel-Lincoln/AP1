/*Desenvolva o código em C de um programa que recebe uma variável
real x e imprime na tela se o valor recebido está entre 0 e 1.*/

#include <stdio.h>

int main() {

    float x;

    printf("Digite um numero real x: ");
    scanf("%f", &x);

    if (x >= 0 && x <= 1) {

        printf("O valor recebido está entre 0 e 1.\n");

    }

    else {

        printf("O valor recebido não está entre 0 e 1.\n");

    }
    
    return 0;
}