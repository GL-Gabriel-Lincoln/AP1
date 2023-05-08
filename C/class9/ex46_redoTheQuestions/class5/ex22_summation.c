/*• Desenvolva o código em C de um programa que solicita um número
inteiro n do usuário e então imprime na tela o resultado da somatória
de todos os números de 0, 1, 2, ..., n, como a fórmula a seguir:
*/

#include <stdio.h>

int main() {

    int n;
    int sum = 0;

    printf("Digite um número: ");
    scanf("%d", &n);

    for (int i = 0; i <= n; i++) {
        sum += i;
    }

    printf("O resultado da somatória de %d é %d\n", n, sum);

    return 0;
}