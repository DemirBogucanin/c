#include <stdio.h>
#include <stdlib.h>

int main() {
    int m, n;
    int **matrica, **transponovana;
    printf("Unesite broj redova (m) i kolona (n) matrice: ");
    scanf("%d %d", &m, &n);
    matrica = (int **)malloc(m * sizeof(int *));
    for (int i = 0; i < m; i++) {
        matrica[i] = (int *)malloc(n * sizeof(int));
    }
    transponovana = (int **)malloc(n * sizeof(int *));
    for (int i = 0; i < n; i++) {
        transponovana[i] = (int *)malloc(m * sizeof(int));
    }
    printf("Unesite elemente matrice:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("Element (%d, %d): ", i + 1, j + 1);
            scanf("%d", &matrica[i][j]);
        }
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            transponovana[j][i] = matrica[i][j];
        }
    }
    printf("\nOriginalna matrica:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matrica[i][j]);
        }
        printf("\n");
    }
    printf("\nTransponovana matrica:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", transponovana[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < m; i++) {
        free(matrica[i]);
    }
    free(matrica);
    for (int i = 0; i < n; i++) {
        free(transponovana[i]);
    }
    free(transponovana);

    return 0;
}
