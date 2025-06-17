#include <stdio.h>
#define MAX 100


void podniz(int niz[],int n,int s)
{
    for(int i=0;i<n;i++)
    {
        int zbir=0;
        for(int j=i;j<n;j++)
        {
            zbir+=niz[j];
            if (zbir==s)
            {
                
                for(int k=i;k<=j;k++)
                {
                    printf("%d ",niz[k]);
                }printf("\n");
                
            }
        }

        
    }
}int main () {
    int n, s, niz[MAX];
    
    printf("Unesite broj elemenata niza: ");
    scanf("%d", &n);

    printf("Unesite elemente niza: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &niz[i]);
    }

    printf("Unesite trazeni zbir S: ");
    scanf("%d", &s);

    podniz(niz,n,s);

    return 0;
}