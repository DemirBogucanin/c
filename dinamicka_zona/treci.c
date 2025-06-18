#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m;
    printf("Unesite broj redova (m): ");
    scanf("%d", &m);
    printf("Unesite broj kolona (n): ");
    scanf("%d", &n);

    // Dinamička alokacija memorije za matricu
    int **matrica = (int **)malloc(m * sizeof(int *));
    if (matrica == NULL) {
        printf("Greska pri alokaciji memorije za redove matrice.\n");
        return 1;
    }

    for (int i = 0; i < m; i++) {
        matrica[i] = (int *)malloc(n * sizeof(int));
        if (matrica[i] == NULL) {
            printf("Greska pri alokaciji memorije za kolone matrice.\n");
            return 1;
        }
    }

    // Unos elemenata matrice
    printf("Unesite elemente matrice (%d x %d):\n", m, n);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("matrica[%d][%d]: ", i, j);
            scanf("%d", &matrica[i][j]);
        }
    }

    // Ispis elemenata matrice
    printf("\nMatrica:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matrica[i][j]);
        }
        printf("\n");
    }

    // Oslobađanje memorije
    for (int i = 0; i < m; i++) {
        free(matrica[i]);
    }
    free(matrica);

    return 0;
}
