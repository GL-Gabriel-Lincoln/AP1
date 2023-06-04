/*Desenvolva o código C de uma função que recebe uma string e então
devolve a mesma string invertida. Por exemplo, se a função receber a
string “ap1” ela deve retornar “1pa”.*/

#include <stdio.h>
#include <stdlib.h>

char* string(char *str) {

    int size = 0;
    
    for (int i = 0; str[i] != '\0'; i++) {

        size += 1;

    }

    char *result = (char*) malloc((size + 1) * sizeof(char));

    int i, j;

    for (i = size - 1, j = 0; i >= 0; i--, j++) {
        
        printf("\n\nresult[%d]: %c\n\n", j, result[j]);
        printf("\n\nstr[%d]: %c\n\n", i, str[i]);

        result[j] = str[i];

        printf("\n\nResult[%d]: %c\n\n", j, result[j]);
        printf("\n\nStr[%d]: %c\n\n", i, str[i]);
    }

    result[j] = '\0';

    return result;
}

int main() {

    char str[100] = " ";

    printf("Digite uma palavra: ");
    scanf("%s", str);

    printf("%s\n", string(str));

    return 0;
}