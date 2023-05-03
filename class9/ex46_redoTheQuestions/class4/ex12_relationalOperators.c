/*Desenvolva o pseudocódigo e o código em C de um programa que lê
duas variáveis inteiras x e y, compara os valores lidos e imprime todas
as relações verdadeiras entre elas (>, <, >=, <=, !=, ==).*/

#include <stdio.h>

int main() {

    int x, y;

    printf("Digite um valor inteiro x: ");
    scanf("%d", &x);

    printf("Digite um valor inteiro y: ");
    scanf("%d", &y);

    if(x > y) {

        printf("x é maior que y\n");
    }
    if(x < y) {

        printf("x é menor que y\n");
    }
    if(x >= y) {

        printf("x é maior ou igual a y\n");
    }
    if(x <= y) {

        printf("x é menor ou igual a y\n");
    }
    if(x != y) {

        printf("x é diferente de y\n");
    }
    if(x == y) {

        printf("x é igual a y\n");
    }

    return 0;
}