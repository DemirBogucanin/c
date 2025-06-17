#include <stdio.h>
#define MAX 100


void ucitajNiz(int *niz, int n) {
    for (int i = 0; i < n; i++) {
        printf("Елемент %d: ", i + 1);
        scanf("%d", (niz + i));
    }
}

void ispisiNiz(int *niz, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", *(niz + i));
    }
    printf("\n");
}

int sumaNiza(int *niz, int n) {
    int suma = 0;
    for (int i = 0; i < n; i++) {
        suma += *(niz + i);
    }
    return suma;
}

int main() {
    int n, niz1[MAX], niz2[MAX];

    printf("Унесите број елемената низова: ");
    scanf("%d", &n);

    printf("Унос елемената првог низа:\n");
    ucitajNiz(niz1, n);


    printf("Унос елемената другог низа:\n");
    ucitajNiz(niz2, n);


    int suma1 = sumaNiza(niz1, n);
    int suma2 = sumaNiza(niz2, n);


    printf("Први низ: ");
    ispisiNiz(niz1, n);
    printf("Сума првог низа: %d\n", suma1);

    printf("Други низ: ");
    ispisiNiz(niz2, n);
    printf("Сума другог низа: %d\n", suma2);


    if (suma1 > suma2) {
        printf("Већа сума је %d (сума првог низа).\n", suma1);
    } else if (suma2 > suma1) {
        printf("Већа сума је %d (сума другог низа).\n", suma2);
    } else {
        printf("Обе суме су једнаке: %d.\n", suma1);
    }

    return 0;
}
