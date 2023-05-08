/*Escreva um programa em C que converta uma temperatura em graus
Celsius para Fahrenheit. A fórmula para conversão é: Fahrenheit =
(Celsius * 9/5) + 32. O programa deve ler a temperatura em Celsius do
usuário e imprimir o resultado na tela.*/

#include <stdio.h>

int main() {

    float celsius;
    float fahrenheit;

    printf("Informe a temperatura em Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9 / 5) + 32;

    printf("Temperatura em Fahrenheit: %.2f\n", fahrenheit);

    return 0;
}