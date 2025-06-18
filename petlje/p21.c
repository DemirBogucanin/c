//32.	Napisati program kojim se izračunava suma:
//2!-4!+6!-…+(-1)n+1(2n)!
#include <stdio.h>
int main()
{
    int n,s=0,f=1;
    printf("Unesite n: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        int broj=2*i;
        for(int j=1;j<=broj;j++)
        {
            f*=j;
        }
        if(i%2==1)
        {
            s+=f;
        }else
        {
            s-=f;
        }f=1;
    }printf("SUma je %d",s);

}