/*Desenvolva o código C de uma função que recebe uma string e então
devolve a mesma string invertida. Por exemplo, se a função receber a
string “ap1” ela deve retornar “1pa”.*/

#include <stdio.h>
#include <stdlib.h>

char* reverseString(char *str) {

    int sizeStr = 0;
    
    for (int i = 0; str[i] != '\0'; i++) {

        sizeStr += 1;
    }

    char *result = (char*) malloc((sizeStr + 1) * sizeof(char));

    int i, j;

    for (i = sizeStr - 1, j = 0; i >= 0; i--, j++) {

        result[j] = str[i];
    }

    result[j] = '\0';

    return result;
}

int main() {

    char str[100] = " ";

    printf("Digite uma palavra: ");
    scanf("%s", str);

    printf("%s\n", reverseString(str));

    return 0;
}