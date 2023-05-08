/*Escreva um programa em C que leia o valor do raio de um círculo e
calcule a circunferência e a área do círculo. A fórmula para calcular a
circunferência é: 2 * PI * raio e a fórmula para calcular a área é: PI *
raio * raio. O programa deve imprimir os resultados na tela.*/

#include <stdio.h>
#define PI 3.14

int main() {

    float ray;
    float circumference;
    float area;

    printf("Informe o valor do raio: ");
    scanf("%f", &ray);

    circumference = 2 * PI * ray;

    area = PI * (ray * ray);

    printf("Circunferência: %.2f\n", circumference);
    printf("Area: %.2f\n", area);
    
    return 0;
}


