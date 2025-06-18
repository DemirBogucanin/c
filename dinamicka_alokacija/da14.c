#include <stdio.h>
#include <stdlib.h>

float ari_sredina(float *matrica, int m, int n, int i, int j) {
    int broj_suseda = 0;
    float suma = 0;
    if (i > 0) {
        suma += matrica[(i - 1) * n + j];
        broj_suseda++;
    }
    if (i < m - 1) {
        suma += matrica[(i + 1) * n + j];
        broj_suseda++;
    }
    if (j > 0) {
        suma += matrica[i * n + (j - 1)];
        broj_suseda++;
    }
    if (j < n - 1) {
        suma += matrica[i * n + (j + 1)];
        broj_suseda++;
    }
    return suma / broj_suseda;
}

int main() {
    int m, n;
    float *matrica;
    printf("Unesite broj redova (m) i kolona (n) matrice: ");
    scanf("%d %d", &m, &n);
    matrica = (float *)malloc(m * n * sizeof(float));
    if (matrica == NULL) {
        printf("Greška u alokaciji memorije za matricu.\n");
        return 1;
    }
    printf("Unesite elemente matrice:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("Element (%d, %d): ", i + 1, j + 1);
            scanf("%f", &matrica[i * n + j]);
        }
    }

    int broj_pozicija = 0;
    for (int i = 1; i < m - 1; i++) {
        for (int j = 1; j < n - 1; j++) {
            float sredina = ari_sredina(matrica, m, n, i, j);
            if (matrica[i * n + j] == sredina) {
                printf("Element %.2f na poziciji (%d, %d) je jednak aritmetickoj sredini svojih suseda.\n", matrica[i * n + j], i + 1, j + 1);
                broj_pozicija++;
            }
        }
    }

    if (broj_pozicija == 0) {
        printf("Nema elemenata koji su jednaki aritmetickoj sredini svojih suseda.\n");
    }
    free(matrica);

    return 0;
}
