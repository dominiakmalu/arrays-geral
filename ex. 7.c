#include <stdio.h>

int main() {
    char matriz[2][3] = {
        {'A', 'B', 'C'},
        {'D', 'E', 'F'}
    };

    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 3; j++)
            printf("%c ", matriz[i][j]);

    return 0;
}