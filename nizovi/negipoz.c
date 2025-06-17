#include <stdio.h>
#define MAX 100


void unosNiza(int niz[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &niz[i]);
    }
}


int formirajNegativne(int niz[], int n, int B[]) {
    int k = 0;
    for (int i = 0; i < n; i++) {
        if (niz[i] < 0) {
            B[k++] = niz[i];
        }
    }
    return k;
}


int formirajPozitivneINule(int niz[], int n, int C[]) {
    int k = 0;
    for (int i = 0; i < n; i++) {
        if (niz[i] >= 0) {
            C[k++] = niz[i];
        }
    }
    return k; 
}

void ispisNiza(int niz[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", niz[i]);
    }
    printf("\n");
}

int main() {
    int n, A[MAX], B[MAX], C[MAX];

    printf("Unesite broj elemenata niza A: ");
    scanf("%d", &n);

    // Унос елемената низа A
    unosNiza(A, n);

    // Формирање низова B и C
    int brNegativnih = formirajNegativne(A, n, B);
    int brPozitivnihINula = formirajPozitivneINule(A, n, C);

    // Испис оригиналног низа
    printf("Niz A: ");
    ispisNiza(A, n);

    // Испис низа негативних елемената
    printf("Niz B (negativni elementi): ");
    ispisNiza(B, brNegativnih);

    // Испис низа позитивних елемената и нула
    printf("Niz C (pozitivni elementi i nule): ");
    ispisNiza(C, brPozitivnihINula);

    return 0;
}
