#include <stdio.h>

int sumaMatrice(int A[100][100], int redovi, int kolone) {
    int suma = 0;
    for (int i = 0; i < redovi; i++) {
        for (int j = 0; j < kolone; j++) {
            suma += A[i][j]; 
        }
    }
    return suma;
}

int uporediMatrice(int A[100][100], int B[100][100], int redovi, int kolone) {
    int sumaA = sumaMatrice(A, redovi, kolone);  
    int sumaB = sumaMatrice(B, redovi, kolone);  
    
    if (sumaA > sumaB) {
        return 1;  
    } else {
        return 0;  
    }
}

int main() {
    int A[100][100], B[100][100];
    int redovi, kolone;
    
   
    printf("Unesite broj redova i kolona: ");
    scanf("%d %d", &redovi, &kolone);
    
  
    printf("Unesite matricu A:\n");
    for (int i = 0; i < redovi; i++) {
        for (int j = 0; j < kolone; j++) {
            scanf("%d", &A[i][j]);
        }
    }
    
 
    printf("Unesite matricu B:\n");
    for (int i = 0; i < redovi; i++) {
        for (int j = 0; j < kolone; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    int rezultat = uporediMatrice(A, B, redovi, kolone);
    printf("%d\n", rezultat);  
    
    return 0;
}
