//	Napisati program kojim se izračunava:
//S=1/1!+(1+2)/2!+(1+2+3)/3!+⋯+(1+2+3+⋯+n)/n!

#include <stdio.h>
int main()
{
    int n,f=1;
    float s=0;
    int zbir=0;
    printf("Unesiite n: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        f*=i;
        zbir+=i;
        s+=zbir/f;
    }printf("%.2f",s);
}