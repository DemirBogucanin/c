//19.	Napisati program kojim se izračunava za učitanu vrednost k:
//y=k(k+1)(k+2)…(2k-1)2k

#include <stdio.h>
int main()
{
    int k;
    printf("Unesite k: ");
    scanf("%d",&k);
    int y=1;
    for(int i=k;i<=2*k;i++)
    {
        y*=i;
    }printf("%d",y);
}