//22.	Sastaviti program kojim se izračunava:
//S=1*2+2*3+3*4+…+(n-1)*n

#include <stdio.h>

int main() {
    long s = 0; 
    int n;
    printf("Unesite n: ");
    scanf("%d", &n);
    for (int i = 1; i < n; i++) {
        s += i * (i + 1); 
    }
    printf("Suma je: %ld\n", s);

    return 0;
}
