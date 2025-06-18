#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, sum = 0;
    int **matrica;

    // Унос димензије матрице
    printf("Unesite broj redova i kolona (n): ");
    scanf("%d", &n);

    // Динамичка алокација меморије за матрицу
    matrica = (int **)malloc(n * sizeof(int *));
    for (int i = 0; i < n; i++) {
        matrica[i] = (int *)malloc(n * sizeof(int));
    }

    // Унос елемената матрице
    printf("Unesite elemente matrice:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Element (%d, %d): ", i + 1, j + 1);
            scanf("%d", &matrica[i][j]);
        }
    }

    // Исписивање матрице
    printf("\nMatrica je:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matrica[i][j]);
        }
        printf("\n");
    }

    // Израчунавање збирa елемената испод споредне дијагонале
    for (int i = 1; i < n; i++) { // Почињемо од реда 1 јер је први ред изнад споредне дијагонале
        for (int j = 0; j < n - i; j++) { // За сваки ред, колоне су мање од n - i
            sum += matrica[i + j][j]; // Пошто су елементи испод споредне дијагонале, индекс реда је већи од индекса колоне
        }
    }

    // Испис збирa
    printf("\nZbir elemenata ispod sporedne dijagonale je: %d\n", sum);

    // Ослобађање динамичке меморије
    for (int i = 0; i < n; i++) {
        free(matrica[i]);
    }
    free(matrica);

    return 0;
}
