#include <stdio.h>
#define MAX 100

int fibinaci(int niz[], int n)
{
    if (niz[0] !=1 || niz[1]!=1)
    {
        return 0;
    }for(int i=2;i<n;i++)
    {
        if (niz[i]!=niz[i-1]+niz[i-2])
        {
            return 0;
        }
    }return 1;
}int main()
{
    int n;
    printf("Unesite broj elemenata :");
    scanf("%d",&n);
    int niz[MAX];
    printf("Unesite elemente niza :");
    for(int i=0;i<n;i++)
    {
        printf("Element %d :",i+1);
        scanf("%d",&niz[i]);
    }if(fibinaci(niz,n))
    {
        printf("Niz je fibinacijev");

    }else
    {
        printf("Niz nije");
    }
}