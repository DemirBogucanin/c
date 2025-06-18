#include <stdio.h>
#include <math.h>

int main() {
    double eps, s = 1.0;  
    int x, f = 1, p = 1, ex;
    printf("Unesite x: ");
    scanf("%d", &x);
    printf("Unesite epsilon: ");
    scanf("%lf", &eps);
    for (int i = 1; fabs(s) >= eps; i++) {
        f *= (2 * i) * (2 * i - 1);  
        ex = 2 * i - 1; 
        double rez = pow(x, ex) / f;
        if (i % 2 == 0) {
            s -= rez;
        } else {
            s += rez;
        }
        if (fabs(rez) < eps) {
            break;
        }
    }
    printf("Rezultat sume: %.10f\n", s);
    return 0;
}
