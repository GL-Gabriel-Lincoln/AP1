/*Crie uma matriz A 10x10 de inteiros e preencha cada posição com um
valor aleatório entre 0 e 10. Depois, imprima a matriz na tela e
imprima a média de cada linha e a média de cada coluna.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {

    int A[10][10];
    float mediaLine = 0;
    float mediaColumn = 0;

    srand(time(NULL));

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            A[i][j] = rand() % 11;
        }
    }

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 10; j++) {
           
            mediaLine += A[i][j];
            mediaColumn += A[j][i];
        }
        
        mediaLine /= 10;
        mediaColumn /= 10;

        printf("\n\nMedia linha %d: %.2f\n",i + 1, mediaLine);
        printf("\n\nMedia coluna %d: %.2f\n",i + 1, mediaColumn);
    }

    return 0;
}