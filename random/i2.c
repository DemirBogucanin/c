#include <stdio.h>
#define MAX 100

void ispis(int a[MAX][MAX], int redovi, int kolone, int niz[], int *duzina) {
    int k = 0;
    int gornja = 0, donja = redovi - 1, leva = 0, desna = kolone - 1;

    while (gornja <= donja && leva <= desna) {
        for (int j = leva; j <= desna; j++) {
            niz[k++] = a[gornja][j];
        }
        gornja++;
        for (int i = gornja; i <= donja; i++) {
            niz[k++] = a[i][desna];
        }
        desna--;

        if (gornja <= donja) {
            for (int j = desna; j >= leva; j--) {
                niz[k++] = a[donja][j];
            }
            donja--;
        }

        if (leva <= desna) {
            for (int i = donja; i >= gornja; i--) {
                niz[k++] = a[i][leva];
            }
            leva++;
        }
    }

    *duzina = k;
}
int main() {
    int matrica[MAX][MAX];
    int n;

    printf("Unesite dimenziju kvadratne matrice (n x n): ");
    scanf("%d", &n);

    printf("Unesite elemente matrice (%d x %d):\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrica[i][j]);
        }
    }

    int niz[MAX];
    int duzina;

    // Popunjavanje niza elementima iz matrice
    ispis(matrica, n, n, niz, &duzina);

    // Ispis niza
    printf("Elementi matrice u spirali su:\n");
    for (int i = 0; i < duzina; i++) {
        printf("%d ", niz[i]);
    }
    printf("\n");

    return 0;
}
