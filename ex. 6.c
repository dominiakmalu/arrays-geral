#include <stdio.h>

int main() {
    int l, c;

    printf("Informe linhas e colunas: ");
    scanf("%d %d", &l, &c);

    double a[l][c], b[l][c];
    double resultado[l * c * 2];
    int k = 0;

    printf("Preencha o primeiro array:\n");
    for (int i = 0; i < l; i++)
        for (int j = 0; j < c; j++)
            scanf("%lf", &a[i][j]);

    printf("Preencha o segundo array:\n");
    for (int i = 0; i < l; i++)
        for (int j = 0; j < c; j++)
            scanf("%lf", &b[i][j]);

    // negativos
    for (int i = 0; i < l; i++)
        for (int j = 0; j < c; j++)
            if (a[i][j] < 0) resultado[k++] = a[i][j];
    for (int i = 0; i < l; i++)
        for (int j = 0; j < c; j++)
            if (b[i][j] < 0) resultado[k++] = b[i][j];

    // positivos e zeros
    for (int i = 0; i < l; i++)
        for (int j = 0; j < c; j++)
            if (a[i][j] >= 0) resultado[k++] = a[i][j];
    for (int i = 0; i < l; i++)
        for (int j = 0; j < c; j++)
            if (b[i][j] >= 0) resultado[k++] = b[i][j];

    printf("Array unidimensional final:\n");
    for (int i = 0; i < k; i++)
        printf("%.2lf ", resultado[i]);

    return 0;
}
