#include <stdio.h>

int main() {
    int matriz[3][3] = {
        {1, 4, 6},
        {3, 8, 9},
        {2, 5, 10}
    };

    int pares[9];
    int k = 0;

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (matriz[i][j] % 2 == 0)
                pares[k++] = matriz[i][j];

    printf("Valores pares: ");
    for (int i = 0; i < k; i++)
        printf("%d ", pares[i]);

    return 0;
}