#include <stdio.h>
#include <math.h>

int main() {
    double s = 1.0, x, eps, clan;
    int n = 1;

    printf("Unesite x: ");
    scanf("%lf", &x);
    printf("Unesite eps: ");
    scanf("%lf", &eps);

    clan = x;

    while (fabs(clan) >= eps) {
        s += clan;
        n++;
        clan = -clan * x / n;
    }

    printf("Suma serije: %lf\n", s);

    return 0;
}
