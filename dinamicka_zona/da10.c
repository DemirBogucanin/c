#include <stdio.h>
#include <stdlib.h>
#define MAX 5


int main()
{
    int *niz,n=0,size=MAX;
    int broj;
    niz=(int *)malloc(n*sizeof(int));
    if(niz==NULL)
    {
        printf("Greska");
        return 1;
    }printf("Unesite brojeve , za kraj unesite slovo\n");
    while(scanf("%d",&broj)==1)
    {
        if(n==size)
        {
            size+=MAX;
            niz=(int*)realloc(niz,size *sizeof(int));
            if(niz==0)
            {
                printf("Greska");
                return 1;
            }
        }niz[n]=broj;
        n++; 
    }printf("Uneti brojevi su:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", niz[i]);
    }
    printf("\n");

    // Oslobađanje alocirane memorije
    free(niz);

    return 0;
}