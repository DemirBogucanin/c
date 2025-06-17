#include <stdio.h>

int sumaniza(int *niz, int n)

{
    int suma=0;
    for(int i=0;i<n;i++)
    {
        suma+=*(niz+i);
    }return suma;
}
int main() {
    int niz[] = {1, 2, 3, 4, 5};
    int n = 5;

    printf("Suma niza: %d\n", sumaniza(niz, n));

    return 0;
}