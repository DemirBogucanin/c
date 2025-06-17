#include <stdio.h>
#define MAX 100

int suma(int *niz,int n)
{
    int s=0;
    for (int i=0;i<n;i++)
    {
        s+=*(niz+i);
    }return s;
    
}int main()
{
    int niz[MAX],n,s=0;
    printf("Unesite niz: ");
    scanf("%d",&n);
    printf("Unesite elemente:\n ");
    for(int i=0;i<n;i++)
    {
        printf("Element: %d:",i+1);
        scanf("%d",&niz[i]);

    }s=suma(niz,n);
    printf(" Suma=%d ",s);

}