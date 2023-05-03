/*Crie um programa que imprima um menu para o usuário com três
opções. A primeira opção, o usuário irá informar um vetor de inteiros
de tamanho 10. Na segunda opção, o usuário irá buscar um
determinado número no vetor e o programa irá imprimir na tela se o
valor está presente no vetor ou não. Na terceira opção, o programa
irá imprimir o menor valor, o maior valor e a soma dos valores do
vetor.*/

#include <stdio.h>

int main() {
    
    int option;
    int vector[10];
    int biggestVectorElement;
    int smallestVectorElement;
    int sumOfVectorElements = 0;
    int numberLookingForInVector;
    
    do {
        printf("=======================================================================================================\n\n");
        printf ("MENU OPÇÕES\n\n");
        printf ("1: Informar um vetor de inteiros de tamanho 10\n");
        printf ("2: Buscar um determinado número no vetor para verifica se o valor está presente no vetor ou não\n");
        printf ("3: Imprimir o menor valor, o maior valor e a soma dos valores do vetor\n");
        printf ("0: Sair do programa\n");
        printf ("\nDigite a opcão escolhida: ");
        scanf("%d", &option);

        printf("\n");
        printf("=======================================================================================================\n\n");

        if(option == 1) {

            printf("Opção 1:\n\n");

            for(int i = 0; i < 10; i++) {
                
                printf("Digite o elemento %d do Vetor: ", i + 1);
                scanf("%d", &vector[i]);
            }
            printf("\n");
        }

        if(option == 2) {

            printf("Opção 2:\n\n");

            printf("Informe um número para buscar no vetor: ");
            scanf("%d", &numberLookingForInVector);

            printf("\n");

            int counter = 0;

            for (int i = 0; i < 10; i++) {
            
                if(vector[i] == numberLookingForInVector) {
                    counter++;
                }
            }

            if(counter > 0) {

                printf("O vetor tem o valor %d\n\n", numberLookingForInVector);
            }
            else {

                printf("O vetor não tem o valor %d\n\n", numberLookingForInVector);
            } 
        }

        if(option == 3) {
        
            printf("Opção 3:\n\n");

            biggestVectorElement = vector[0];
            smallestVectorElement = vector[0];

            for (int i = 0; i < 10; i++) {
            
                if (vector[i] > biggestVectorElement) {

                    biggestVectorElement = vector[i];
                }

                if (vector[i] < smallestVectorElement) {
                    
                    smallestVectorElement = vector[i];
                }
            }
            
            for (int i = 0; i < 10; i++) {
                    
                sumOfVectorElements += vector[i];
            }

            printf("Maior valor: %d\n", biggestVectorElement);
            printf("Menor valor: %d\n", smallestVectorElement);
            printf("Resultado soma dos elementos do vetor: %d\n\n", sumOfVectorElements);
        }

    } while (option != 0);

    return 0;
}