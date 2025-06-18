#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, *A, *B, *C;
    int bCount = 0, cCount = 0;  // Brojači za negativne i pozitivne brojeve
    
    // Unos broja elemenata niza A
    printf("Unesite broj elemenata niza A: ");
    scanf("%d", &n);

    // Dinamička alokacija memorije za niz A
    A = (int *)malloc(n * sizeof(int));
    if (A == NULL) {
        printf("Greška u alokaciji memorije za niz A.\n");
        return 1;
    }

    // Unos elemenata niza A
    printf("Unesite elemente niza A:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    // Prvo prebrojavamo koliko negativnih i pozitivnih brojeva imamo
    for (int i = 0; i < n; i++) {
        if (A[i] < 0) {
            bCount++;
              // Povećavamo broj negativnih brojeva
        } else if (A[i] > 0) {
            cCount++;  // Povećavamo broj pozitivnih brojeva
        }
    }

    // Dinamička alokacija memorije za niz B (negativni brojevi)
    B = (int *)malloc(bCount * sizeof(int));
    if (B == NULL) {
        printf("Greška u alokaciji memorije za niz B.\n");
        free(A);  // Oslobađamo prethodno alociranu memoriju
        return 1;
    }

    // Dinamička alokacija memorije za niz C (pozitivni brojevi)
    C = (int *)malloc(cCount * sizeof(int));
    if (C == NULL) {
        printf("Greška u alokaciji memorije za niz C.\n");
        free(A);  // Oslobađamo prethodno alociranu memoriju
        free(B);  // Oslobađamo memoriju za niz B
        return 1;
    }

    // Popunjavamo nizove B i C
    int bIndex = 0, cIndex = 0;
    for (int i = 0; i < n; i++) {
        if (A[i] < 0) {
            B[bIndex++] = A[i];  // Dodajemo negativne brojeve u niz B
        } else if (A[i] > 0) {
            C[cIndex++] = A[i];  // Dodajemo pozitivne brojeve u niz C
        }
    }

    // Ispis rezultata
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

    // Oslobađanje alocirane memorije
    free(A);
    free(B);
    free(C);

    return 0;
}
