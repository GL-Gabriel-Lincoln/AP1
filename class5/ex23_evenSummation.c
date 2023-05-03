/*Desenvolva o código em C de um programa que solicita um número
inteiro 𝑛 do usuário e então imprime na tela a somatória de todos os
números pares inteiros no intervalo fechado [1, 𝑛].*/

#include <stdio.h>

int main() {

    int n;
    int sum = 0;
    
    printf("Digite um número inteiro: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        
        if(i % 2 == 0) { 
        sum += i;
        }
    }

    printf("Somatória de todos os números pares inteiros: %d\n", sum);

    return 0;
}