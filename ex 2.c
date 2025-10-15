#include <stdio.h>

int main() {
    int matriz[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    }, invertida[3][3];

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            invertida[i][j] = matriz[2 - i][2 - j];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
            printf("%d ", invertida[i][j]);
        printf("\n");
    }

    return 0;
}
