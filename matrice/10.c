#include <stdio.h>
#include <math.h> 
#define MAX 100


void unosMatrice(double X[MAX][MAX], int redovi, int kolone) {
    printf("Unesite elemente matrice (%d x %d):\n", redovi, kolone);
    for (int i = 0; i < redovi; i++) {
        for (int j = 0; j < kolone; j++) {
            printf("X[%d][%d] = ", i, j);
            scanf("%lf", &X[i][j]);
        }
    }
}


void formirajMatricuY(double X[MAX][MAX], double Y[MAX][MAX], int redovi, int kolone) {
    for (int i = 0; i < redovi; i++) {
        for (int j = 0; j < kolone; j++) {
            Y[i][j] = 0;
        }
    }


    for (int i = 0; i < redovi; i++) {
        for (int j = 0; j < kolone; j++) {
            if (fmod(X[i][j], 2) == 0 && (i + j == 3)) {
                Y[i][j] = X[i][j];
            }
        }
    }
}


void ispisMatrice(double Y[MAX][MAX], int redovi, int kolone) {
    printf("Elementi matrice Y:\n");
    for (int i = 0; i < redovi; i++) {
        for (int j = 0; j < kolone; j++) {
            printf("%.2lf ", Y[i][j]);
        }
        printf("\n");
    }
}

int main() {
    double X[MAX][MAX], Y[MAX][MAX];
    int redovi, kolone;


    printf("Unesite broj redova i kolona matrice X: ");
    scanf("%d %d", &redovi, &kolone);

    unosMatrice(X, redovi, kolone);


    formirajMatricuY(X, Y, redovi, kolone);

    ispisMatrice(Y, redovi, kolone);

    return 0;
}
