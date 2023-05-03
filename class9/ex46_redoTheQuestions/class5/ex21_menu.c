/*Desenvolva o código em C de um programa que imprime na tela um
menu onde o usuário poderá escolher entre: (1) Opção 1, (2) Opção
2, (3) Opção 3, (4) sair. Caso a opção (4) seja escolhida o programa
deve encerrar. Caso qualquer outra opção seja escolhida o programa
deve imprimir na tela o menu novamente.*/

#include <stdio.h>

int main() {
    
    int option;
    do {
        
        printf("Menu de opções:\n");
        printf("(1) Opção 1\n");
        printf("(2) Opção 2\n");
        printf("(3) Opção 3\n");
        printf("(4) Sair\n");
        scanf("%d", &option);
    } while(option != 4);

    return 0;
}