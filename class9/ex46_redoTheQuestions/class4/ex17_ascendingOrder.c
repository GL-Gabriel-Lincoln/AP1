/*Faça um programa que leia três números inteiros e exiba-os em
ordem crescente.*/

#include <stdio.h>

int main() {

    int n1, n2, n3;

    printf("Digite 3 números: x x x ");
    scanf("%d %d %d", &n1, &n2, &n3);

    if(n1 <= n2 && n2 <= n3) {

        printf("a ordem crescente é %d, %d e %d\n", n1, n2, n3);
    }
    else if(n1 <= n3 && n3 <= n2) {

        printf("a ordem crescente é %d, %d e %d\n", n1, n3, n2);
    }
    
    else if(n2 <= n1 && n1 <= n3) {

        printf("a ordem crescente é %d, %d e %d\n", n2, n1, n3);
    }
    
    else if(n2 <= n3 && n3 <= n1) {

        printf("a ordem crescente é %d, %d e %d\n", n2, n3, n1);
    }

    else if(n3 <= n1 && n1 <= n2) {

        printf("a ordem crescente é %d, %d e %d\n", n3, n1, n2);
    }
    
    else if(n3 <= n2 && n2 <= n1) {

        printf("a ordem crescente é %d, %d e %d\n", n3, n2, n1);
    }

    return 0;
}