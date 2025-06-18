#include <stdio.h>
#include <math.h>

int main()
{
    double s = 1.0, eps, ex, f = 1.0, x;
    int i = 1;
    printf("Unesite x: ");
    scanf("%lf", &x);
    printf("Unesite epsilon: ");
    scanf("%lf", &eps);
    while (fabs(ex / f) > eps) {
        ex = pow(x, i);  
        f *= i;         
        if (i % 2 == 0) {
            s -= ex / f;
        } else {
            s += ex / f;  
        }
        i++;
    }
    printf("Aproksimacija: %lf\n", s);

    return 0;
}
