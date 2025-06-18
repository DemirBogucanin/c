#include <stdio.h>
#define MAX 100

void zbirIspodGlavne(int a[][MAX], int n) {
    int zbir = 0;
    for (int i = 1; i < n; i++) {  
        for (int j = 0; j < i; j++) {  
            zbir += a[i][j];
        }
    }
    printf("Zbir ispod glavne dijagonale: %d\n", zbir);
}

void zbirIznadGlavne(int a[][MAX], int n) {
    int zbir = 0;
    for (int i = 0; i < n - 1; i++) {  
        for (int j = i + 1; j < n; j++) {  
            zbir += a[i][j];
        }
    }
    printf("Zbir iznad glavne dijagonale: %d\n", zbir);
}

void zbirIspodSporedne(int a[][MAX], int n) {
    int zbir = 0;
    for (int i = 1; i < n; i++) {  
        for (int j = n - i; j < n; j++) {  
            zbir += a[i][j];
        }
    }
    printf("Zbir ispod sporedne dijagonale: %d\n", zbir);
}

void zbirIznadSporedne(int a[][MAX], int n) {
    int zbir = 0;
    for (int i = 0; i < n - 1; i++) { 
        for (int j = 0; j < n - i - 1; j++) { 
            zbir += a[i][j];
        }
    }
    printf("Zbir iznad sporedne dijagonale: %d\n", zbir);
}

void zbirDijagonala(int a[][MAX], int n) {
    int zbir = 0;
    for (int i = 0; i < n; i++) {
        zbir += a[i][i];  
        zbir += a[i][n - i - 1];  
    }
    
    if (n % 2 != 0) {
        zbir -= a[n / 2][n / 2];
    }
    printf("Zbir glavne i sporedne dijagonale: %d\n", zbir);
}

int main() {
    int n, a[MAX][MAX];

    
    printf("Unesite dimenziju matrice: ");
    scanf("%d", &n);

    
    printf("Unesite elemente matrice:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Element (%d,%d): ", i+1, j+1);
            scanf("%d", &a[i][j]);
        }
    }

    
    zbirIspodGlavne(a, n);
    zbirIznadGlavne(a, n);
    zbirIspodSporedne(a, n);
    zbirIznadSporedne(a, n);
    zbirDijagonala(a, n);

    return 0;
}
