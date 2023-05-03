/*Desenvolva o código em C de um programa que soma números
inteiros informados pelo usuário até que um número negativo seja
informado e então imprime o resultado da soma na tela.*/

#include <stdio.h>

int main() {

    int n;
    int sum = 0;

    printf("Digite um número: ");
    scanf("%d", &n);

    while (n >= 0) {

        sum += n;

        printf("Digite um número: ");
        scanf("%d", &n);

        if (n < 0) {

            sum += n;
            printf("O resultado da soma de é %d\n", sum);
        }
    }

    return 0;
}