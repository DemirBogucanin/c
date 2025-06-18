//aći i ispisati sve brojeve do 9999 koji su jednaki sumi prvih N prirodnih brojeva.

#include <stdio.h>

int main() {
    int broj, suma, N;
    for (broj = 1; broj <= 9999; broj++) {
        suma = 0;
        for (N = 1; suma < broj; N++) {
            suma += N;  
        }
        if (suma == broj) {
            printf("%d\n", broj);
        }
    }

    return 0;
}
