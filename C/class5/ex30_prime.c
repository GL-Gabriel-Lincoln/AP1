/*Desenvolva um programa em C que lê um número do teclado e
verifica se ele é primo ou não.*/

#include <stdio.h>

int main () {

    int n, contador = 0;

    printf("Digite um número: ");
    scanf("%d", &n);

    
    for (int i = 2; i <= n / 2; i++) {
   
        if (n % i == 0) {
            
            contador++;
        }    
    }

    if(contador == 0) {

        printf("O número %d é primo\n", n);
    }
    else {

        printf("O número %d não é primo\n", n);
    }

    return 0;
}