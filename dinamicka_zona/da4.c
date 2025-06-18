#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Unesi broj elemenata: ");
    scanf("%d", &n);

    // Alokacija memorije za niz
    int *niz = (int *)malloc(n * sizeof(int));
    if (niz == NULL) {
        printf("\nGreska pri alokaciji memorije.\n");
        return 1;
    }

    // Unos elemenata niza
    printf("Unesite elemente niza: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &niz[i]); // Ispravka: dodan '&' ispred niz[i]
    }

    // Proširenje niza
    printf("Unesite novi broj elemenata niza: ");
    int nova;
    scanf("%d", &nova);

    niz = (int *)realloc(niz, nova * sizeof(int));
    if (niz == NULL) {
        printf("\nGreska pri realokaciji memorije.\n");
        return 1;
    }

    // Inicijalizacija dodatnih elemenata (ako je niz proširen)
    if (nova > n) {
        printf("Unesite nove elemente niza: ");
        for (int i = n; i < nova; i++) {
            scanf("%d", &niz[i]);
        }
    }

    // Ispis elemenata niza
    printf("Elementi niza: ");
    for (int i = 0; i < nova; i++) { // Ispravka: koristimo 'nova' umesto 'n'
        printf("%d ", niz[i]);
    }
    printf("\n");

    // Oslobađanje memorije
    free(niz);

    return 0;
}
