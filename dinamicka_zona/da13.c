#include <stdio.h>
#include <stdlib.h>

int main() {
    int m, n;
    int **matrica, **transponovana;

    // Унос димензија матрице
    printf("Unesite broj redova (m) i kolona (n) matrice: ");
    scanf("%d %d", &m, &n);

    // Динамичка алокација меморије за матрицу
    matrica = (int **)malloc(m * sizeof(int *));
    for (int i = 0; i < m; i++) {
        matrica[i] = (int *)malloc(n * sizeof(int));
    }

    // Динамичка алокација меморије за транспонирану матрицу
    transponovana = (int **)malloc(n * sizeof(int *));
    for (int i = 0; i < n; i++) {
        transponovana[i] = (int *)malloc(m * sizeof(int));
    }

    // Унос елемената матрице
    printf("Unesite elemente matrice:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("Element (%d, %d): ", i + 1, j + 1);
            scanf("%d", &matrica[i][j]);
        }
    }

    // Транспоновање матрице
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            transponovana[j][i] = matrica[i][j];
        }
    }

    // Испис оригиналне матрице
    printf("\nOriginalna matrica:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matrica[i][j]);
        }
        printf("\n");
    }

    // Испис транспониране матрице
    printf("\nTransponovana matrica:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", transponovana[i][j]);
        }
        printf("\n");
    }

    // Ослобађање динамичке меморије
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
