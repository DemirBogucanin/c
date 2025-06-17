#include <stdio.h>

#define MAX 100 


void unosMatrice(int A[MAX][MAX], int redovi, int kolone) {
    printf("Unesite elemente matrice (%dx%d):\n", redovi, kolone);
    for (int i = 0; i < redovi; i++) {
        for (int j = 0; j < kolone; j++) {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }
}


int sumaVrste(int A[MAX][MAX], int kolone, int red) {
    int suma = 0;
    for (int j = 0; j < kolone; j++) {
        suma += A[red][j];
    }
    return suma;
}


int jeSAVRSENA(int A[MAX][MAX], int redovi, int kolone) {
    for (int i = 0; i < redovi; i++) {
        if (sumaVrste(A, kolone, i) <= 0) {
            return 0; 
        }
    }
    return 1; 
}

int main() {
    int A[MAX][MAX]; 
    int redovi, kolone;

    
    printf("Unesite broj redova: ");
    scanf("%d", &redovi);
    printf("Unesite broj kolona: ");
    scanf("%d", &kolone);

   
    unosMatrice(A, redovi, kolone);

    
    if (jeSAVRSENA(A, redovi, kolone)) {
        printf("Matrica je savrsena.\n");
    } else {
        printf("Matrica nije savrsena.\n");
    }

    return 0;
}
