//31.	Napisati program kojim se izračunava suma: S=1*3+2*3*5*6+…+n*(n+1)*…*(3*n). 
#include <stdio.h>
int main()
{
    int s=0,n;
    printf("Unesite n: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        long proizvod=1;
        for(int i=n;i<=3*n;i++)
        {
            proizvod*=i;
        }s+=proizvod;
    }printf("SUma je %d",s);
}