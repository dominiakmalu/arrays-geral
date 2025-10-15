#include <stdio.h>

int main() {
    char matriz[2][3] = {
        {'a', 'b', 'c'},
        {'d', 'e', 'f'}
    };
    char c;
    int encontrado = 0;

    printf("Digite um caractere: ");
    scanf(" %c", &c);

    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 3; j++)
            if (matriz[i][j] == c) {
                printf("Caractere encontrado na posição [%d,%d] do array\n", i, j);
                encontrado = 1;
            }

    if (!encontrado)
        printf("Caractere não encontrado no array\n");

    return 0;
}