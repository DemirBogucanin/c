#include <stdio.h>
#include <stdlib.h>

float ari_sredina(float *matrica, int m, int n, int i, int j) {
    int broj_suseda = 0;
    float suma = 0;

    // Горњи сусед
    if (i > 0) {
        suma += matrica[(i - 1) * n + j];
        broj_suseda++;
    }

    // Доњи сусед
    if (i < m - 1) {
        suma += matrica[(i + 1) * n + j];
        broj_suseda++;
    }

    // Леви сусед
    if (j > 0) {
        suma += matrica[i * n + (j - 1)];
        broj_suseda++;
    }

    // Десни сусед
    if (j < n - 1) {
        suma += matrica[i * n + (j + 1)];
        broj_suseda++;
    }

    // Враћа аритметичку средину
    return suma / broj_suseda;
}

int main() {
    int m, n;
    float *matrica;

    // Унос димензија матрице
    printf("Unesite broj redova (m) i kolona (n) matrice: ");
    scanf("%d %d", &m, &n);

    // Динамичка алокација меморије за матрицу
    matrica = (float *)malloc(m * n * sizeof(float));
    if (matrica == NULL) {
        printf("Greška u alokaciji memorije za matricu.\n");
        return 1;
    }

    // Унос елемената матрице
    printf("Unesite elemente matrice:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("Element (%d, %d): ", i + 1, j + 1);
            scanf("%f", &matrica[i * n + j]);
        }
    }

    int broj_pozicija = 0;

    // Проверимо који су елементи једнаки аритметичкој средини својих суседа
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

    // Ослобађање динамичке меморије
    free(matrica);

    return 0;
}
