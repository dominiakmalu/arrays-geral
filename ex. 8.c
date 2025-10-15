#include <stdio.h>

int main() {
    double matriz[2][3] = {
        {1.0, 2.0, 3.0},
        {4.0, 5.0, 6.0}
    };

    double soma = 0;
    int total = 0;

    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 3; j++) {
            soma += matriz[i][j];
            total++;
        }

    printf("Média dos elementos: %.2lf\n", soma / total);

    return 0;
}

