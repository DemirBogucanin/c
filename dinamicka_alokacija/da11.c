#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, j, new_elem;
    printf("Unesite broj elemenata niza: ");
    scanf("%d", &n);
    int *niz = (int *)malloc(n * sizeof(int));
    if (niz == NULL) {
        printf("Greska u alokaciji memorije.\n");
        return 1;
    }
    printf("Unesite elemente niza:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &niz[i]);
    }
    printf("Unesite poziciju j (izmedju 0 i %d): ", n - 1);
    scanf("%d", &j);
    if (j < 0 || j >= n) {
        printf("Pogresan unos pozicije j.\n");
        free(niz);
        return 1;
    }

    printf("Unesite novi element za umetanje: ");
    scanf("%d", &new_elem);
    niz = (int *)realloc(niz, (n + 1) * sizeof(int));
    if (niz == NULL) {
        printf("Greska u alokaciji memorije.\n");
        return 1;
    }
    for (int i = n; i > j; i--) {
        niz[i] = niz[i - 1];
    }
    niz[j + 1] = new_elem;
    printf("Novi niz: ");
    for (int i = 0; i <= n; i++) {
        printf("%d ", niz[i]);
    }
    free(niz);
    return 0;
}
