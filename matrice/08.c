#include <stdio.h>

int sumaMatrice(int A[100][100], int i, int kolone) {
    int suma = 0;
    for(int j = 0; j < kolone; j++) {
        suma += A[i][j];
    }
    return suma;
}

void uporediMatrice(int A[100][100], int B[100], int redovi, int kolone) {
    for(int i = 0; i < redovi; i++) {
        int suma = sumaMatrice(A, i, kolone);
        if(suma > 0) {
            B[i] = 1;
        } else {
            B[i] = 0;
        }
    }
}

void ispisiNiz(int B[100], int redovi) {
    printf("Niz B:\n");
    for(int i = 0; i < redovi; i++) {
        printf("%d ", B[i]);
    }
    printf("\n");
}

int main() {
    int A[100][100], B[100];
    int redovi, kolone;
    

    printf("Unesite broj redova i kolona: ");
    scanf("%d %d", &redovi, &kolone);
    
    
    printf("Unesite matricu A:\n");
    for (int i = 0; i < redovi; i++) {
        for (int j = 0; j < kolone; j++) {
            scanf("%d", &A[i][j]);
        }
    }
    

    uporediMatrice(A, B, redovi, kolone);
    

    ispisiNiz(B, redovi);
    
    return 0;
}
