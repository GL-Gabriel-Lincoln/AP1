/*Desenvolva um programa que imprime na tela “branco” e “cinza”
alternadamente 𝑛 vezes.*/

#include <stdio.h>

int main() {

    int n;

    printf("Digite um numero: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {

        if(i % 2 != 0) {
        printf("Branco\n");
        }
        else {
        printf("Cinza\n");
        }
    }

    return 0;
}