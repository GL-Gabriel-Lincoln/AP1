/*Seja uma empresa dividida entre departamento de compras e
departamento de vendas. Cada um dos departamentos contam com 3
funcionários. Os funcionários do departamento de compras possuem
salários de 100, 50 e 50 reais respectivamente. Os funcionários do
departamento de vendas possuem salários de 120, 30 e 20
respectivamente. Quanto a empresa gasta em salários no total?*/

#include <stdio.h>

int main() {
    
    int purchaseAndSales[2][3] = {{100, 50, 50},
                                  {120, 30, 20}};

    int totalSalaries = 0;

    for (int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            
            totalSalaries += purchaseAndSales[i][j];
        }
    }

    printf("Total: %d\n", totalSalaries);
    return 0;
}