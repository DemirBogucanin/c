//23.	Napisati program kojim se izračunava:
#include <stdio.h>

int main()
{
    int n,f=1;
    float s=0;
    printf("Unesite n: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        f*=i;
        s+=1.0/f;
    }printf("%.2f",s);
    return 0;
}