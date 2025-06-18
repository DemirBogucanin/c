//7.	Ispisati sve trocifrene brojeve čija je suma cifara jednaka učitanom broju X.
#include <stdio.h>

int main() {
    int X, broj, suma, stotine, desetice, jedinice;
    printf("Unesite broj X: ");
    scanf("%d", &X);
    printf("Trocifreni brojevi cija je suma cifara jednaka %d su:\n", X);
    for (broj = 100; broj <= 999; broj++)
        stotine = broj / 100;
        desetice = (broj / 10) % 10;
        jedinice = broj % 10;
        suma = stotine + desetice + jedinice;
        if (suma == X) {
            printf("%d\n", broj);
        }
    }

    return 0;
}