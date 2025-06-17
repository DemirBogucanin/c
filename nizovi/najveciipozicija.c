#include <stdio.h>
#define MAX 100

int main()
{
    int n,niz[MAX],imax=0;
    printf("Unesite broj elemenata:");
    scanf("%d",&n);
    printf("Unesite elemente :");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&niz[i]);
    }int max=niz[0];
    for(int i=1;i<n;i++)
    {
        if(niz[i]>max)
        {
            max=niz[i];
            imax=i;
        }
    }printf("%d\n",max);
    printf("%d",imax);
}


