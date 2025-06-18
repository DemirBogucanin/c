#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Unesi broj elemenata: ");
    scanf("%d", &n);


    int *niz = (int *)malloc(n * sizeof(int));
    if (niz == NULL) {
        printf("\nGreska pri alokaciji memorije.\n");
        return 1;
    }


    printf("Unesite elemente niza: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &niz[i]); 
    }

    printf("Unesite novi broj elemenata niza: ");
    int nova;
    scanf("%d", &nova);

    niz = (int *)realloc(niz, nova * sizeof(int));
    if (niz == NULL) {
        printf("\nGreska pri realokaciji memorije.\n");
        return 1;
    }

    if (nova > n) {
        printf("Unesite nove elemente niza: ");
        for (int i = n; i < nova; i++) {
            scanf("%d", &niz[i]);
        }
    }

    printf("Elementi niza: ");
    for (int i = 0; i < nova; i++) { 
        printf("%d ", niz[i]);
    }
    printf("\n");

    free(niz);

    return 0;
}
