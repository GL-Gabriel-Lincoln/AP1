/*Desenvolva o código em C de um programa em que o usuário informa
a nota de 𝑛 alunos e o programa conta quantos alunos foram
aprovados (nota ≥ 6) e quantos alunos foram reprovados (nota < 6).*/

#include <stdio.h>

int main() {

    int n;
    float note;
    int approved = 0, disapproved = 0;

    printf("Digite quantos alunos tem: ");
    scanf("%d", &n);

    printf("Digite a nota dos alunos\n");

    for(int i = 1; i <= n; i++) {
        
        printf("Aluno %d: \n", i);
        scanf("%f", &note);
        
        if(note >= 6) {

            approved++;    
        }
        else if (note < 6){

            disapproved++;
        }
    }
    
    printf("Alunos aprovados: %d\n", approved);
    printf("Alunos reprovados: %d\n", disapproved);

    return 0;
}