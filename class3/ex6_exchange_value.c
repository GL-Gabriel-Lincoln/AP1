/*Escreva um programa em C que leia o valor de duas variáveis inteiras
a e b e troque o valor delas. Ou seja, o valor de a deve ser igual ao
valor de b e o valor de b deve ser igual ao valor de a. O programa
deve imprimir os valores atualizados das variáveis na tela.*/

#include <stdio.h>

int main() {

    int a, b;
    int varvelauxiliary; 

    printf ("Digite a valor da variavel A: ");
    scanf ("%d", &a);

    printf ("Digite a valor da variavel B: ");
    scanf ("%d", &b);

    varvelauxiliary = a;
    a = b;
    b = varvelauxiliary;

    printf ("O valor de A é: %d\n", a);

    printf ("O valor de B é: %d\n", b);
    
    return 0;
}