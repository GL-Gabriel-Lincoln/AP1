/*Faça um programa que lê uma data no formato DD/MM/AA e verifica
se ela é válida. Desconsidere anos bissextos.*/

#include <stdio.h>

int main() {

    int day, month, year;

    printf("Digite uma data: DD MM AAAA ");
    scanf("%d %d %d", &day, &month, &year);

    if((day < 01 && day > 31) || (month < 01 && month > 12) || (year < 0000 && year > 9999)) {

        printf("Data invalida\n");
        return 0;
    }
    if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30) {

        printf("Data invalida\n");
        return 0;
    }
    else if (month == 2 && day > 28) {

        printf("Data invalida\n");
        return 0;
    }
    
    printf("Data valida\n");

    return 0;
}

