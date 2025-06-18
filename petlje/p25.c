	//Napisati program kojim se određuje suma:
//S=(n+m)/1!+(n+2m)/2!+⋯+(n+m*m)/m!
#include <stdio.h>
int main()
{
    int n,m,f=1;
    float s=0;
    printf("Unesite n: ");
    scanf("%d",&n);
    printf("Unesite m: ");
    scanf("%d",&m);
    for(int i=1;i<=m;i++)
    {
        f*=i;
        s+=(float)(n+i*m)/f;
    }printf("%.2f",s);
}