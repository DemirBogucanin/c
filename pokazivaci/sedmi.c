#include <stdio.h>
#define MAX 100

void skup(int a[],int *n)
{
    int k,j=0;
    for(int i=0;i<*n;i++)
    {
        for (k = 0; k < j && a[k] != a[i]; k++) {
    }   
    if (k == j) {
        a[j] = a[i];
        j++;
    }

    }*n=j;
}
int main()
{
    int a[MAX],n;
    printf("Unesite broj elemenata: ");
    scanf("%d",&n);
    printf("Unesti elemente: ");
    for(int i=0;i<n;i++)
    {
        printf("Element: %d: ",i+1);
        scanf("%d",&a[i]);
    }
    skup(a,&n);
    printf("Elementi skupa: ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }return 0;

}