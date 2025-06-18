#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,*niz;
    printf("Unesi broj elementa niza: ");
    scanf("%d",&n);
    niz=(int*)malloc(n*sizeof(int));
    if(niz==NULL)
    {
        printf("\ngreska");
        return 1;
    }printf("Unesite niz");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&niz[i]);
    }int s=0;
    for(int i=0;i<n;i++)
    {
        s+=niz[i];
    }float ari=(float)s/n;
    printf("Ari sredina je %f",ari);
}