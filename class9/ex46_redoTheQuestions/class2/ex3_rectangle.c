/*Escreva um programa em C que calcule o perímetro e a área de um
retângulo de base 10 e altura 5 e imprima os resultados na tela.*/

#include <stdio.h>

int main() {

    int base = 10;
    int height = 5;
    int perimeter;
    int area;

    perimeter = 2 * base + 2 * height;

    area = base * height;

    printf("Perimetro: %d\n", perimeter);
    printf("Area: %d\n", area);

    return 0;
}

