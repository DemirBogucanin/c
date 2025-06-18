#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,max;
    int *a;
    printf("Unesite duzina niza: ");
    scanf("%d",&n);
    a=(int*)malloc(n*sizeof(int));
    if(a==NULL)
    {
        printf("Greska");
        return 1;
    }
    printf("Unesite niz: ");
    for(int i=0;i<n;i++)
    {
        printf("Element %d: ",i+1);
        scanf("%d",&a[i]);
    }
    max=a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }

    }printf("Najveci element je %d",max);
    free(a);

}