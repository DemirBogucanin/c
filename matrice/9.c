#include <stdio.h>
#define MAX 100

void unos(int x[], int n) {
    printf("Unesite niz:\n");
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &x[i]);
    }
}

double srednjaVrednost(int x[], int n) {
    double suma = 0;
    for (int i = 0; i < n; i++) {
        suma += x[i];
    }
    return suma / n;
}

int formirajNizY(int x[], int y[], int n) {
    double aritmeticka = srednjaVrednost(x, n);
    int brojac = 0;

    for (int i = 0; i < n; i++) {
        if (x[i] < aritmeticka) {
            y[brojac] = x[i];
            brojac++;
        }
    }
    return brojac; 
}

void ispis(int y[], int m) {
    printf("Niz Y (manji od aritmetičke sredine):\n");
    for (int i = 0; i < m; i++) {
        printf("%d ", y[i]);
    }
    printf("\n");
}

int main() {
    int x[MAX], y[MAX];
    int n, m;

    printf("Unesite broj elemenata niza: ");
    scanf("%d", &n);

    unos(x, n);

    m = formirajNizY(x, y, n);

    ispis(y, m);

    return 0;
}
