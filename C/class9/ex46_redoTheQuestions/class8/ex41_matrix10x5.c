/*Crie uma matriz A10x5 e preencha com valores aleatórios entre 1 e 10.
Posteriormente, imprima na tela os maiores valores de cada coluna.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int A[10][5];
    int maxA = 10;
    int minA = 1;
    int V[5] = {0};
    
    srand(time(NULL));

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 5; j++) {
            A[i][j] = (rand() % (maxA - minA + 1)) + minA;
        }
    }

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d  ", A[i][j]);
        }
        printf("\n");
    }

    int maiorValor = A[0][0];

    for (int j = 0; j < 5; j++) {
        maiorValor = A[0][j];
        for (int i = 1; i < 10; i++) {
            if (A[i][j] >= maiorValor) {
                maiorValor = A[i][j];
                V[j] = maiorValor;
            }
            else {
                V[j] = maiorValor;
            }
        }
    }
    for (int i = 0; i < 5; i++) {
        printf("Maior valor da coluna %d: %d\n", i + 1, V[i]);
    }

    return 0;
}