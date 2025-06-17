#include <stdio.h>
#define MAX 100


void unosMatrice(int X[MAX][MAX], int redovi, int kolone) {
    printf("Unesite elemente matrice (%d x %d):\n", redovi, kolone);
    for (int i = 0; i < redovi; i++) {
        for (int j = 0; j < kolone; j++) {
            printf("X[%d][%d] = ", i, j);
            scanf("%d", &X[i][j]);
        }
    }
}


void minMaxIspodSporedne(int X[MAX][MAX], int redovi, int kolone, int *min, int *max, int *minI, int *minJ, int *maxI, int *maxJ) {
    *min = X[1][0];  
    *max = X[1][0]; 
    *minI = 1;     
    *minJ = 0;
    *maxI = 1;       
    *maxJ = 0;


    for (int i = 1; i < redovi; i++) {
        for (int j = 0; j < i; j++) {
            if (X[i][j] < *min) {
                *min = X[i][j]; 
                *minI = i;
                *minJ = j;
            }
            if (X[i][j] > *max) {
                *max = X[i][j];
                *maxI = i;
                *maxJ = j;
            }
        }
    }
}


void zameniMesta(int X[MAX][MAX], int minI, int minJ, int maxI, int maxJ) {

    int temp = X[minI][minJ];
    X[minI][minJ] = X[maxI][maxJ];
    X[maxI][maxJ] = temp;
}


void ispisMatrice(int X[MAX][MAX], int redovi, int kolone) {
    printf("Matrica:\n");
    for (int i = 0; i < redovi; i++) {
        for (int j = 0; j < kolone; j++) {
            printf("%d ", X[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int X[MAX][MAX];
    int redovi, kolone;
    int min, max, minI, minJ, maxI, maxJ;

    printf("Unesite broj redova i kolona matrice: ");
    scanf("%d %d", &redovi, &kolone);


    unosMatrice(X, redovi, kolone);


    minMaxIspodSporedne(X, redovi, kolone, &min, &max, &minI, &minJ, &maxI, &maxJ);


    printf("Matrica pre zamene:\n");
    ispisMatrice(X, redovi, kolone);


    zameniMesta(X, minI, minJ, maxI, maxJ);


    printf("Matrica nakon zamene:\n");
    ispisMatrice(X, redovi, kolone);

    return 0;
}
