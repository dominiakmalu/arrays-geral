#include <stdio.h>

int main() {
    int matriz[3][3] = {
        {10, 20, 30},
        {40, 50, 60},
        {70, 80, 90}
    };

    for (int i = 2; i >= 0; i--) {
        for (int j = 2; j >= 0; j--) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
