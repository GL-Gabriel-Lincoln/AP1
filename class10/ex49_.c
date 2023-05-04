/*Desenvolva o código C de uma função que recebe duas strings por
parâmetro e então devolve a junção das duas strings.*/

#include <stdio.h>
#include <stdlib.h>

char* junção(char *string1, char *string2) {

    int tamanho1 = 0;
    int tamanho2 = 0;
    int tamanho3;

    int i, j;
    
    

    for (int i = 0; string1[i] != '\0'; i++) {

        tamanho1 += i;
    }

    for (int i = 0; string2[i] != '\0'; i++) {

        tamanho2 += i;
    }

    tamanho3 = tamanho1 + tamanho2;

    char *string3 = (char*) malloc((tamanho3 + 1) * sizeof(char));

    for (i = 0; string1[i] != '\0'; i++) {

        string3[i] = string1[i];
    }

    for (j = 0; string2[j] != '\0'; j++, i++) {

        string3[i] = string2[j];
    }

    string3[i] = '\0';

    return string3;
}

int main() {

    char string1[100], string2[100];
    char* string3;

    printf("Digite alguma coisa: ");
    scanf("%s", string1);

    printf("Digite outra coisa: ");
    scanf("%s", string2);

    string3 = junção(string1, string2);

    printf("Resultado: %s\n", string3);

    free(string3);

    return 0;
}