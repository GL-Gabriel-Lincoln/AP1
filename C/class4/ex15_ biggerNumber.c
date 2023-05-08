/*Faça um programa que leia três números inteiros e exiba o maior
deles.*/

#include <stdio.h>

int main() {

    int n1, n2, n3; 

    printf("Digite 3 números inteiros: x x x ");
    scanf("%d %d %d", &n1, &n2, &n3);

    if((n1 >= n2 && n2 >= n3) || (n1 >= n3 && n3 >= n2)) {

        printf("O número %d é o maior\n", n1);
    }
    
    else if((n2 >= n1 && n1 >= n3) || (n2 >= n3 && n3 >= n1)) {

        printf("O número %d é o maior\n", n2);
    }

    else if((n3 >= n1 && n1 >= n2) || (n3 >= n2 && n2 >= n1)) {

        printf("O número %d é o maior\n", n3);
    }

    return 0;
}