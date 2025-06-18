#include <stdio.h>
#include <math.h>

int main()
{
    double s=1.0,a,x,eps,clan;
    int n,i=0;
    printf("Unesite x: ");
    scanf("%lf",&x);
    printf("Unesite a: ");
    scanf("%lf",&a);
    printf("Unesite eps: ");
    scanf("%lf",&eps);
    clan=x;
    while(fabs(clan)>=eps)
    {
        i++;
        s+=clan;
        clan=clan*(a-i+1)*x/i;
        s+=clan;
    }
    printf("S=%lf",s);
}