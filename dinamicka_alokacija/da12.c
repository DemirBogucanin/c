#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, sum = 0;
    int **matrica;
    printf("Unesite broj redova i kolona (n): ");
    scanf("%d", &n);
    matrica = (int **)malloc(n * sizeof(int *));
    for (int i = 0; i < n; i++) {
        matrica[i] = (int *)malloc(n * sizeof(int));
    }
    printf("Unesite elemente matrice:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Element (%d, %d): ", i + 1, j + 1);
            scanf("%d", &matrica[i][j]);
        }
    }
    printf("\nMatrica je:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matrica[i][j]);
        }
        printf("\n");
    }
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < n - i; j++) {
            sum += matrica[i + j][j]; 
        }
    }
    printf("\nZbir elemenata ispod sporedne dijagonale je: %d\n", sum);
    for (int i = 0; i < n; i++) {
        free(matrica[i]);
    }
    free(matrica);

    return 0;
}
