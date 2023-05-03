/*Faça um programa que leia três coordenadas (x, y) e informa se elas
formam um triângulo. Dica: é necessário calcular a distância entre
elas.*/

#include <stdio.h>
#include <math.h>

int main() {

    float x1, y1;
    float x2, y2;
    float x3, y3;
    float distance12, distance23, distance31;

    printf("Informe primeira coordenada: x1 y1 ");
    scanf("%f %f", &x1, &y1);

    printf("Informe segunda coordenada: x2 y2 ");
    scanf("%f %f", &x2, &y2);

    printf("Informe terceira coordenada: x3 y3 ");
    scanf("%f %f", &x3, &y3);

    distance12 = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
    distance23 = sqrt(pow(x2 - x3, 2) + pow(y2 - y3, 2));
    distance31 = sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2));
    
    if ( ( (distance12 + distance23) > distance31 ) && ( (distance23 + distance31) > distance12 ) && ( (distance31 + distance12) > distance23 )) {
    
        printf("Triângulo formam um triângulo.\n");
    }
    else {
    
        printf("Triângulo não formam um triângulo.\n");
    }
    return 0;
}