/*Desenvolva o código C de uma função que retorna verdadeiro caso
uma string passada por parâmetro esteja vazia, falso do contrário.*/

#include <stdio.h>
#include <stdbool.h>

bool functionTrueFalse(char *str) {

    if(str[0] == '\0') {
        
        return true;
    }
    else {

        return false;
    }
}

int main() {

    char str[] = {0};

    printf("Digite qualquer coisa: ");
    scanf("%s", str);

    printf ("Retorno: %d\n", functionTrueFalse(str));

    return 0;
}

