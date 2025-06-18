//program ubacuje u niz svaku polovinu dijagonale osim elemnta u sredini

#include <stdio.h>
#define MAX 100

void ispis(int a[MAX][MAX], int redovi, int kolona, int niz[], int *duzina) {
    int k = 0;

    for (int i = 0; i < redovi / 2; i++) {
        niz[k++] = a[i][i];
    }
    for (int i = redovi - 1; i > redovi / 2; i--) {
        niz[k++] = a[i][i];
    }

    for (int i = 0; i < redovi / 2; i++) {
        niz[k++] = a[i][redovi - i - 1];
    }

    for (int i = redovi - 1; i > redovi / 2; i--) {
        niz[k++] = a[i][redovi - i - 1];
    }

    *duzina = k;
}

int main() {
    int n, a[MAX][MAX], niz[MAX], duzina;

    printf("Unesite dimenziju kvadratne matrice (n x n): ");
    scanf("%d", &n);

    printf("Unesite elemente matrice (%d x %d):\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    ispis(a, n, n, niz, &duzina);

    printf("Niz sa elementima polovina dijagonala:\n");
    for (int i = 0; i < duzina; i++) {
        printf("%d ", niz[i]);
    }

    return 0;
}
