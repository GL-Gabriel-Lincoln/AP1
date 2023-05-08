/*Desenvolva um programa em C que calcule a seguinte formula:
𝑓 𝑥 =                  1, 𝑥 = 1
            2 + 𝑓(𝑥 − 1), 𝑥 > 1*/

#include <stdio.h>

int main() {

    int x, f = 1;

    printf("Digite um valor para x: ");
    scanf("%d", &x);

    if (x == 1) {
        f = 1;
    } 
    else if (x > 1) {
        
        for (int i = 1; i < x; i++) {
        
            f += 2;
        }
    }

    printf("O valor de f(x) é %d\n", f);

    return 0;
}
