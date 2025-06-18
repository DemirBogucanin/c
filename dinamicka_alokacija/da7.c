#include <stdio.h>
#include <stdlib.h>


void obrnuti(int *niz,int n)
{
    for(int i=n-1;i>=0;i--)
    {
        printf("%d",niz[i]);
    }
}
int main()
{
    int n,*niz;
    printf("Unesite broj elemenata niza: ");
    scanf("%d",&n);
    niz=(int*)malloc(n*sizeof(int));
    if(niz==NULL)
    {
        printf("\ngreska");
        return 1;
    }
    printf("Unesite elemente niza: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&niz[i]);
    }obrnuti(niz,n);
    free(niz);
}