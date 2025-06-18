#include <stdio.h>
#define MAX 100

void ispis(int a[MAX][MAX], int n, int niz[], int duzina) {
    int k = 0;
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j + 1) {
                niz[k++] = a[i][j];
            }
        }
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j - 1) {
                niz[k++] = a[i][j];
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i + j == n) {
                niz[k++] = a[i][j];
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i + j == n - 2) {
                niz[k++] = a[i][j];
            }
        }
    }
}

int main() {
    int n, a[MAX][MAX], niz[MAX];
    
    printf("Unesite dimenziju matrice: ");
    scanf("%d", &n);

    printf("Unesite elemente matrice (%d x %d):\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    ispis(a, n, niz, n);

    printf("Rezultat:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", niz[i]);
    }

    return 0;
}
