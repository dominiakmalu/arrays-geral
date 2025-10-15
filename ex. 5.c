#include <stdio.h>

int main() {
    int a[2][2] = {{1, 2}, {3, 4}};
    int b[2][2] = {{5, 6}, {7, 8}};
    int c[4][2]; // junta os dois arrays

    int linha = 0;

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++)
            c[linha][j] = a[i][j];
        linha++;
    }

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++)
            c[linha][j] = b[i][j];
        linha++;
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 2; j++)
            printf("%d ", c[i][j]);
        printf("\n");
    }

    return 0;
}
