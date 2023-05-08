/*Seja uma matriz A3x3 informada pelo usuário. Calcule e imprima na
tela o determinante de A.*/

#include <stdio.h>

int main() {

    int A[3][3];
    int determinantA = 0;

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
        printf("Digite o A[%d] [%d]: ", i + 1, j + 1);
        scanf("%d", &A[i][j]);
        }
    }

    determinantA = ((A[0][0] * A[1][1] * A[2][2]) + (A[0][1] * A[1][2] * A[2][0]) + (A[0][2] * A[1][0] * A[2][1])) -
    ((A[0][2] * A[1][1] * A[2][0]) + (A[0][0] * A[1][2] * A[2][1]) + (A[0][1] * A[1][0] * A[2][2]));
    
    printf("O determinante de A é: %d\n", determinantA);

    return 0;
}