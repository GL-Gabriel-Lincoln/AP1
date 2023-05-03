/*Faça um programa que leia um vetor de 10 posições do usuário. No
final, o programa deve exibir o maior e o menor elemento do vetor.
Além disso, o programa também deve exibir a soma dos números
pares, a soma dos números ímpares e a soma dos números primos do
vetor.*/

#include <stdio.h>

int main() {

    int v[10];
    int greatestElement;
    int smallestElement;
    int sumOfEvens = 0;
    int sumOfOdds = 0;
    int sumOfPrimes = 0;
    int counter = 0;

    for (int i = 0; i < 10; i++) {

        printf("Digite o elemento %d: ", i + 1);
        scanf("%d", &v[i]);
    }

    greatestElement = v[0];
    smallestElement = v[0];

    for (int i = 0; i < 10; i++) {
    
        if (v[i] > greatestElement) {

            greatestElement = v[i];
        }

        if (v[i] < smallestElement) {
            
            smallestElement = v[i];
        }

        if(v[i] % 2 == 0) {

            sumOfEvens += v[i];
        }
        else {

            sumOfOdds += v[i];
        }
    }

    for(int i = 0; i < 10; i++) {
        
        if (v[i] == 2) {

            counter = 0;
        }
        else if (v[i] % 2 == 0) {
            
            counter++;
        }

        if(counter == 0) {

            sumOfPrimes += v[i];
        }
        else {
            
            counter--;
        }
    }

    printf("Maior elemento: %d\n", greatestElement);
    printf("Menor elemento: %d\n", smallestElement);
    printf("Soma dos pares: %d\n", sumOfEvens);
    printf("Soma dos impares: %d\n", sumOfOdds);
    printf("Soma dos primos: %d\n", sumOfPrimes);

    return 0;
}