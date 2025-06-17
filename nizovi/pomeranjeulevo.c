#include <stdio.h>
#define MAX 100


int main()
{
    int a[MAX],n,pom;
    printf("Unesite broj elemenata :");
    scanf("%d",&n);
    printf("Unesite elemente niza");
    for(int i=0;i<n;i++)
    {
        printf("Element %d :",i+1);
        scanf("%d",&a[i]);
    }
    pom=a[0];
    for(int i=0;i<n-1;i++)
    {
        a[i]=a[i+1];

    }a[n-1]=pom;
    printf("Novi niz je: ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    
}