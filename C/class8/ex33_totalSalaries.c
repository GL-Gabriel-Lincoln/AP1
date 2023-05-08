/*Suponha uma empresa com 5 funcionários onde cada um tem um
salário de 100, 50, 50, 120 e 30 reais respectivamente. Quanto a
empresa gasta em salários no total?*/

#include <stdio.h>

int main() {

    int salaries[5] = {100, 50, 50, 120, 30};
    int totalSalaries = 0; 

    for (int i = 0; i < 5; i++) {
        
        totalSalaries += salaries[i];
    }

    printf("Salarios ao total: %d\n", totalSalaries);

    return 0;
}