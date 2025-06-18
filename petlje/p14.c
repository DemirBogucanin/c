//23.	Napisati program kojim se izračunava:
//S=1!+2!+3!+…+n!

#include <stdio.h>
int main()
{
    int n,f=1;
    int s=0;
    printf("Unesite n: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        f*=i;
        s+=f;
    }printf("%d",s);
}
    