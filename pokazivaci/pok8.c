

#include <stdio.h>
#define MAX 100

void bablsort(int *niz, int n) {
    int pom;

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (niz[j] > niz[j + 1]) {
               
                pom = niz[j];
                niz[j] = niz[j + 1];
                niz[j + 1] = pom;
            }
        }
    }
}

int main() {
    int i, n, niz[MAX];
    printf("Broj elemenata niza: ");
    scanf("%d", &n);
    printf("Elementi niza: ");
    for (i = 0; i < n; i++)
        scanf("%d", &niz[i]);

   
    bablsort(niz, n);

    printf("Sortirani niz: ");
    for (i = 0; i < n; i++)
        printf("%d ", niz[i]);
    return 0;
}
