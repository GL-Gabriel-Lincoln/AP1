/*Escreva um programa em C que leia o valor de um produto e calcule o
valor final com desconto de 10%. O programa deve imprimir o valor
final na tela.*/

#include <stdio.h>

int main() {

    float productValue;
    float finalProductValue;

    printf("Informe o valor de um produto: ");
    scanf("%f", &productValue);

    finalProductValue = productValue - productValue * (10.0 / 100);
    
    printf("O valor final é: %f\n", finalProductValue);

    return 0;
}