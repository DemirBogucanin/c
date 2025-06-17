#include <stdio.h>

void unos(float niz[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%f", &niz[i]);
    }
}

float izracunajProsek(float niz[], int n) {
    float suma = 0;
    for (int i = 0; i < n; i++) {
        suma += niz[i];
    }
    return suma / n;
}

int formirajNiz(float A[], int n, float B[]) {
    float prosek = izracunajProsek(A, n);
    int k = 0;
    for (int i = 0; i < n; i++) {
        if (A[i] > prosek) {
            B[k++] = A[i];
        }
    }
    return k; 
}

void ispis(float niz[], int n) {
    printf("Niz B: ");
    for (int i = 0; i < n; i++) {
        printf("%.2f ", niz[i]);
    }
    printf("\n");
}

int main() {
    int n;
    printf("Unesite broj elemenata niza: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Duzina niza mora biti pozitivna!\n");
        return 1;
    }

    float A[n], B[n];
    unos(A, n);

    int m = formirajNiz(A, n, B);

    if (m == 0) {
        printf("Nema elemenata vecih od aritmeticke sredine.\n");
    } else {
        ispis(B, m);
    }

    return 0;
}
