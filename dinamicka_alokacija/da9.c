#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, *A, *B, *C;
    int bCount = 0, cCount = 0;  
    printf("Unesite broj elemenata niza A: ");
    scanf("%d", &n);
    A = (int *)malloc(n * sizeof(int));
    if (A == NULL) {
        printf("Greška u alokaciji memorije za niz A.\n");
        return 1;
    }
    printf("Unesite elemente niza A:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }
    for (int i = 0; i < n; i++) {
        if (A[i] < 0) {
            bCount++;
        } else if (A[i] > 0) {
            cCount++;
        }
    }
    B = (int *)malloc(bCount * sizeof(int));
    if (B == NULL) {
        printf("Greška u alokaciji memorije za niz B.\n");
        free(A);  
        return 1;
    }

    C = (int *)malloc(cCount * sizeof(int));
    if (C == NULL) {
        printf("Greška u alokaciji memorije za niz C.\n");
        free(A);
        free(B); 
        return 1;
    }
    int bIndex = 0, cIndex = 0;
    for (int i = 0; i < n; i++) {
        if (A[i] < 0) {
            B[bIndex++] = A[i]; 
        } else if (A[i] > 0) {
            C[cIndex++] = A[i];  
        }
    }
    printf("Niz B (negativni brojevi): ");
    for (int i = 0; i < bCount; i++) {
        printf("%d ", B[i]);
    }
    printf("\n");

    printf("Niz C (pozitivni brojevi): ");
    for (int i = 0; i < cCount; i++) {
        printf("%d ", C[i]);
    }
    printf("\n");
    free(A);
    free(B);
    free(C);

    return 0;
}
