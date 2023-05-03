/*Crie uma matriz A3x3 de booleanos e preencha cada posição
aleatoriamente. Crie uma matriz B3x3 de inteiros e preencha cada
posição com valores aleatórios entre 1 e 100. Depois, calcule a
seguinte fórmula:
 Σ    Σ
𝑖=1 𝑗=1 𝐵𝑖𝑗 , ∀ 𝑖 = 1, … , 3 𝑒 𝑗 = 1, … , 3 | 𝐴𝑖𝑗 = true
*/


#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int A[3][3];
    int B[3][3];

    bool maxA = true;
    bool minA = false;
    
    int maxB = 100;
    int minB = 1;
    
    int sum = 0;
    
    srand(time(NULL));
    
    for(int i = 0;i < 3;i++) {
        for(int j = 0; j < 3;j++){
            A[i][j] = (rand() % (maxA - minA + 1)) + minA;
        }
    }
    
    for(int i = 0;i < 3;i++) {
        for(int j = 0; j < 3;j++){
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
    
    printf("\n");
    
    for(int i = 0;i < 3;i++) {
        for(int j = 0; j < 3;j++){
            B[i][j] = (rand() % (maxB - minB + 1)) + minB;
        }
    }
    
    for(int i = 0;i < 3;i++) {
        for(int j = 0; j < 3;j++){
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }
    
    for(int i = 0;i < 3;i++) {
        for(int j = 0; j < 3;j++){
            if(A[i][j] == true) {
                
                sum += B[i][j];
            }
        }
    }
        
    printf("\nValor da soma: %d\n", sum);
    
    return 0;
}