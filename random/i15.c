#include <stdio.h>
#include <math.h>

int main()
{
    double x,a,ex,s=1.0,eps,clan;
    int f=1,i=1;
    printf("Unesite x: ");
    scanf("%lf",&x);
    printf("Unesite a: ");
    scanf("%lf",&a);
    printf("Unesite eps: ");
    scanf("%d",&eps);
    while(fabs(clan)>eps)
    {
        ex=pow(x,i);
        f*=i;
        clan=ex*(a*(a-i)/f);
        s+=clan;
        i++;
    }printf("%lf",s);

}