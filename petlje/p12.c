//21.	Napisati program kojim se za učitane vrednosti N i M izračunava P:
//P=(n+m)(n-2m)…(n+(-1)n+1m*m)


#include <stdio.h>

int main() {
    int N, M;
    long long P = 1;
    printf("Unesite vrednost N: ");
    scanf("%d", &N);
    printf("Unesite vrednost M: ");
    scanf("%d", &M);
    for (int i = 1; i <= M; i++) {
        if (i % 2 == 1) {
            P *= (N + i * M); 
        } else {
            P *= (N - i * M); 
        }
    }
    printf("Proizvod P je: %lld\n", P);

    return 0;
}
