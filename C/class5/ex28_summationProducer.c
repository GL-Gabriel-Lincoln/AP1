#include <stdio.h>
#include <math.h>

int main() {

    int n;
    int summation = 0;
    float producer = 1;
    float result;

    printf("Digite um valor para n: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        
        summation += i;
    }

    for(int i = 1; i <= n / 2; i++) {

        producer *= sqrt (i);
    }

    result = producer + summation;

    printf("Resultado de %d é %f\n", n, result);

    return 0;
}