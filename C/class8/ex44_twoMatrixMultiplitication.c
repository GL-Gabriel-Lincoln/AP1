/*Faça um programa que leia duas matrizes 3x3 da tela e imprima o
resultado da multiplicação entre elas.*/

#include <stdio.h>

int main() {

    int matrix1[3][3];
    int matrix2[3][3];
    int result[3][3];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            
            printf("Digite a matriz 1[%d][%d]: ", i, j);
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("\n");

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            
            printf("Digite a matriz 2[%d][%d]: ", i, j);
            scanf("%d", &matrix2[i][j]);

            result[i][j] = matrix1[i][j] * matrix2[i][j];
        }
    }

    printf("\n");

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Resultado[%d][%d] = matriz 1[%d][%d] * matriz 2[%d][%d] = %d\n", i, j, i, j, i, j, result[i][j]);
        }
    }
    
    return 0;
}