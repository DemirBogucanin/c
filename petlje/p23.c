	//Napisati program kojim se određuje suma :
//S=∑_(i=1)^n▒(i^2+5)^3/√n
#include <stdio.h>
#include <math.h>

int main() {
    int n;
    double suma = 0;
    printf("Unesite n: ");
    scanf("%d", &n);
    double sqrt_n = sqrt(n);
    for (int i = 1; i <= n; i++) {
        double term = pow(i * i + 5, 3);
        suma += term / sqrt_n;
    }
    printf("Suma je: %.2f\n", suma);

    return 0;
}
