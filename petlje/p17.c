//	Napisati program kojim se izračunava:
//S=1!/(1/2)+2!/(1/2+1/3)+3!/(1/2+1/3+1/4)+⋯+n!/(1/2+1/3+1/4+⋯+1/(n+1))
#include <stdio.h>
int main()
{
    int n,f=1;
    float s=0,zbir=0;
    printf("Unesite n: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        zbir+=1.0/(i+1);
        f*=i;
        s+=zbir/f;
    }printf("%.2f",s);
}