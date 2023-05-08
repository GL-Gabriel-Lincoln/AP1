/*Faça um programa que leia dois vetores tridimensionais do usuário.
Depois, imprima a multiplicação escalar dos vetores.*/

#include <stdio.h>

int main() {

    int v1[3];
    int v2[3];
    int multiplication[3];
    int result = 0;

    for (int i = 0; i < 3; i++) {
        
        if (i == 0) {
            printf("Vetor1 - Digite o elemento x: ");
            scanf("%d", &v1[i]);
        }
        if (i == 1) {
            printf("Vetor1 - Digite o elemento y: ");
            scanf("%d", &v1[i]);
        }
        if (i == 2) {
            printf("Vetor1 - Digite o elemento z: ");
            scanf("%d", &v1[i]);
            
            printf("\n");
        }
    }

    for (int i = 0; i < 3; i++) {
        
        if (i == 0) {
            printf("Vetor2 - Digite o elemento x: ");
            scanf("%d", &v2[i]);
        }
        if (i == 1) {
            printf("Vetor2 - Digite o elemento y: ");
            scanf("%d", &v2[i]);
        }
        if (i == 2) {
            printf("Vetor2 - Digite o elemento z: ");
            scanf("%d", &v2[i]);
            
            printf("\n");
        }

        multiplication[i] = v1[i] * v2[i];

        result += multiplication[i];
    }

    printf("Resultado da multiplicação escalar: %d\n", result);

    return 0;
}