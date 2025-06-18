//20.	Napisati program kojim se za učitane vrednosti N i M izračunava P:
//P=n(n+m)(n+2m)…(n+m*m

#include <stdio.h>

int main()
{
    int n,m;
    long long p=1;
    printf("Unesite m: ");
    scanf("%d",&m);
    printf("Unesite n: ");
    scanf("%d",&n);
    for(int i=0;i<m;i++)
    {
        p*=(n+i*m);
    }printf("%lld",p);
}