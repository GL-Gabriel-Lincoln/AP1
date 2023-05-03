/*Desenvolva o código em C para calcular o IMC (índice de massa
corpórea) de uma pessoa (peso/altura²).*/

#include <stdio.h>

int main() {

    float weight;
    float height;
    float bmi;

    printf("Digite o peso(kg): ");
    scanf("%f", &weight);

    printf("Digite a altura(m): ");
    scanf("%f", &height);

    bmi = weight / (height * height);

    printf("O IMC é: %f\n", bmi);

    return 0;
}

