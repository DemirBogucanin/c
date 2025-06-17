#include <stdio.h>
#define MAX 100


void unosMatrice(int a[MAX][MAX], int redovi, int kolone) {
    printf("Unesite elemente matrice (%d x %d):\n", redovi, kolone);
    for (int i = 0; i < redovi; i++) {
        for (int j = 0; j < kolone; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
}


int proizvodMinMax(int a[MAX][MAX], int redovi, int kolone) {

    int min = a[0][0];
    int max = a[0][0];

    for (int i = 0; i < redovi; i++) {
        for (int j = 0; j < kolone; j++) {
            if (a[i][j] < min) {
                min = a[i][j];
            }
            if (a[i][j] > max) {
                max = a[i][j];
            }
        }
    }


    return min * max;
}

int main() {
    int a[MAX][MAX];
    int redovi, kolone;


    printf("Unesite broj redova i kolona matrice X: ");
    scanf("%d %d", &redovi, &kolone);


    unosMatrice(a, redovi, kolone);


    int rezultat = proizvodMinMax(a, redovi, kolone);


    printf("Proizvod najmanjeg i najvećeg elementa matrice je: %d\n", rezultat);

    return 0;
}
