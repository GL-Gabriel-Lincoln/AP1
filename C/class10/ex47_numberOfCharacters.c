/*Desenvolva o código C de uma função que retorna a quantidade de
caracteres de uma string passada por parâmetro.*/

#include <stdio.h>

int contador(char *str) {

    int n = 0;

    if(str == NULL) {
        return n;
    }
    
    for (int i = 0; str[i] != '\0'; i++) {

        n++;
    }

    return n;
}

int main() {
    
    char str[100];

    printf("Digite a string: ");
    scanf("%s", str);
    
    printf("\nQuantidade de caracteres: %d\n", contador(str));

    return 0;
}