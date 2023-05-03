/*Faça um programa que leia dois vetores tridimensionais do usuário.
Depois, imprima a multiplicação escalar dos vetores.*/

#include <stdio.h>

int main() {

    int v1[1][1][1];
    int v2[1][1][1];
    int multiplication[1][1][1];;

    for (int i = 0; i < 1; i++) {
        for (int j = 0; j < 1; j++) {
            for (int k = 0; k < 1; k++) {
                printf("Vetor1 - Digite o elemento %d %d %d: ", i, j, k);
                scanf("%d", &v1[i][j][k]);
            }
        }
    }

    for (int i = 0; i < 1; i++) {
        for (int j = 0; j < 1; j++) {
            for (int k = 0; k < 1; k++) {
                
                printf("Vetor2 - Digite o elemento %d %d %d: ", i, j, k);
                scanf("%d", &v2[i][j][k]);

                multiplication[i][j][k] = v1[i][j][k] * v2[i][j][k];
            }
        }
    }

    for (int i = 0; i < 1; i++) {
        for (int j = 0; j < 1; j++) {
            for (int k = 0; k < 1; k++) {
                printf("Resultado da multiplicação escalar dos vetores %d e %d: %d ", v1[i][j][k], v2[i][j][k], multiplication[i][j][k]);
            }
            printf("\n");
        }
    }

    return 0;
}