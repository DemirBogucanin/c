#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, j, new_elem;

    // Унос дужине низа
    printf("Unesite broj elemenata niza: ");
    scanf("%d", &n);

    // Динамичка алокација меморије за низ
    int *niz = (int *)malloc(n * sizeof(int));
    if (niz == NULL) {
        printf("Greska u alokaciji memorije.\n");
        return 1;
    }

    // Унос елемената низа
    printf("Unesite elemente niza:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &niz[i]);
    }

    // Унос позиције j и новог елемента
    printf("Unesite poziciju j (izmedju 0 i %d): ", n - 1);
    scanf("%d", &j);
    if (j < 0 || j >= n) {
        printf("Pogresan unos pozicije j.\n");
        free(niz); // Ослобађање меморије
        return 1;
    }

    printf("Unesite novi element za umetanje: ");
    scanf("%d", &new_elem);

    // Динамичка алокација меморије за нови низ (додат један елемент)
    niz = (int *)realloc(niz, (n + 1) * sizeof(int));
    if (niz == NULL) {
        printf("Greska u alokaciji memorije.\n");
        return 1;
    }

    // Померање елемената са позиције j ка крају
    for (int i = n; i > j; i--) {
        niz[i] = niz[i - 1];
    }

    // Уметање новог елемента
    niz[j + 1] = new_elem;

    // Испис новог низа
    printf("Novi niz: ");
    for (int i = 0; i <= n; i++) {
        printf("%d ", niz[i]);
    }

    // Ослобађање меморије
    free(niz);
    return 0;
}
