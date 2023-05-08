/*Desenvolva o código em C de um programa que recebe uma variável
inteira 𝑛 e imprime na tela o valor de 𝑛!*/

#include <stdio.h>

int main() {

    int n;
    int factorial = 1;

    printf("Digite um número fatorial: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {

        factorial *= i;
    }

    printf("O fatorial de %d é %d\n", n, factorial);

    return 0;
}