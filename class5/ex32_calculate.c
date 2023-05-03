/*Faça um programa em C que simule uma calculadora simplificada. O
programa deve exibir um menu que possibilite o usuário a escolher
entre as operações de soma, subtração, multiplicação, divisão e sair.
Caso a opção sair seja escolhida, o programa encerra. Caso qualquer
outra opção seja escolhida, o programa irá pedir ao usuário dois
operandos e realizar a respectiva operação.*/

#include <stdio.h>

int main() {

    float n1,  n2;
    int option;

    do {

        printf("Informe o primeiro número: ");
        scanf("%f", &n1);

        printf("Informe o segundo número: ");
        scanf("%f", &n2);

        printf("Digite a opção que queira fazer:\n");
        printf("  1. adição\n");
        printf("  2. subtração\n");
        printf("  3. multiplicação\n");
        printf("  4. divisão\n");
        printf("  0. sair\n");
        printf("Opcão: ");
        scanf("%d", &option);

        if (option == 1) {

            printf("Resultado: %.2f\n", n1 + n2);  
        }

        if (option == 2) {

            printf("\n\nResultado: %.2f\n", n1 - n2); 
        }
        if (option == 3) {

            printf("Resultado: %.2f\n", n1 * n2);
        }
        if (option == 4) {

            printf("Resultado: %.2f\n", n1 / n2);
        }

    } while (option != 0);

    return 0;
}