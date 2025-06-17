#include <stdio.h>

int main() {
    int m, n, p;
    printf("Unesite dimenzije matrice A (m x n): ");
    scanf("%d %d", &m, &n);
    printf("Unesite dimenzije matrice B (n x p): ");
    scanf("%d %d", &n, &p);

    int A[m][n], B[n][p], C[m][p];


    printf("Unesite elemente matrice A:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }


    printf("Unesite elemente matrice B:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            scanf("%d", &B[i][j]);
        }
    }


    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            C[i][j] = 0;
            for (int k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }


    printf("Proizvod matrica A i B je:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
