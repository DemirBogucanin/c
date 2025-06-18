#include <stdio.h>
#include <math.h>

int main()
{
    int x, eps, f = 1, ex;
    double s = 1.0, clan;
    printf("Unesite x: ");
    scanf("%d", &x);
    printf("Unesite epsilon: ");
    scanf("%d", &eps);
    for (int i = 1; ; i++) {
        f *= i;  
        ex = pow(x, i);  
        clan = (double) ex / f; 
        s += clan;
        if (fabs(clan) < eps) {
            break;
        }
    }
    printf("Aproksimacija funkcije e^x: %.10lf\n", s);

    return 0;
}
