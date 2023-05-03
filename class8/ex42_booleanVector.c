/*Crie um programa que lê um vetor V com 10 posições de booleanos
do usuário. O programa deve exibir a conversão da representação
binária do vetor para um número decimal na tela.*/

#include <stdio.h>
#include <math.h>

int main() {
    int V[10];
    int decimalNumber = 0;

    for (int i = 0; i < 10; i++) {
        
        printf("%d - Digite 0 ou 1: ", i + 1);
        scanf("%d", &V[i]);

        decimalNumber += V[i] * pow(2, 9 - i);
    }

    printf("\nO número em decimal equivale a %d\n", decimalNumber);

    return 0;
}