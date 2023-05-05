/*Construa um programa em C que recebe um vetor V de 5 elementos
do usuário e imprime na tela o maior elemento do vetor.*/

#include <stdio.h>

int main() {

    int v[5];
    int majorElement = 0;

    for (int i = 0; i < 5; i++) {
        
        printf("Informe elemento %d do vetor: ", i + 1);
        scanf("%d", &v[i]);
    }

    majorElement = v[0];

    for (int i = 0; i < 5; i++) {

        if (v[i] > majorElement) {
            majorElement = v[i];
        }
    }

    printf("\n\nElemento maior: %d\n", majorElement);

    return 0;
}