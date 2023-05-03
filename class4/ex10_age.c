/*Escreva um programa em C que calcule a idade de uma pessoa em
anos, meses e dias. O programa deve ler a data de nascimento da
pessoa (dia, mês e ano) e a data atual (dia, mês e ano) e imprimir a
idade na tela. Para este exercício, assuma que todos os meses
possuem exatamente 30 dias.*/

#include <stdio.h>

int main() {

    int birthDay, birthMonth, birthYear;
    int currentDay, currentMonth, currentYear;
    int ageDay, ageMonth, ageYear;

    printf("Informe a data de nascimento da pessoa: xx xx xxxx ");
    scanf("%d %d %d", &birthDay, &birthMonth, &birthYear);

    printf("Informe a data atual: xx xx xxxx ");
    scanf("%d %d %d", &currentDay, &currentMonth, &currentYear);

    ageDay = currentDay - birthDay;
    ageMonth = currentMonth - birthMonth;
    ageYear = currentYear - birthYear;

    if(ageDay < 0) {
        
        ageDay = 30 + ageDay;
        ageMonth = ageMonth - 1;

    }

    if (ageMonth < 0) {
    
        ageMonth = 12 + ageMonth;
        ageYear = ageYear - 1;
        
    }

    printf("Idade: Ano %d, Mês %d, Dia %d\n", ageYear, ageMonth, ageDay);

    return 0;
}