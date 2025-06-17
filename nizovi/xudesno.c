#include <stdio.h>
#define MAX 100


void rotiraj(int a[],int n)
{
    int pom=a[n-1];
    for(int i=n-1;i>0;i--)
    {
        a[i]=a[i-1];
    }a[0]=pom;
}

    
int main()
{
    int a[MAX],n,pom,x;
    printf("Unesite broj elemenata :");
    scanf("%d",&n);
    printf("Unesite elemente niza");
    for(int i=0;i<n;i++)
    {
        printf("Element %d :",i+1);
        scanf("%d",&a[i]);
    }
    x=x%n;
    printf("Unesite x :");
    
    scanf("%d",&x);
    for(int i=0;i<x;i++)
    {
        rotiraj(a,n);
    }printf("Rotorani niz je :");
    for(int i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }printf("\n");

}    