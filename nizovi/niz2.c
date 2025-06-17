//Саставити програм за формирање низа С од два задата низа целих бројева А и В (сваки
//дужине 5) на следећи начин: А[0]+B[4],…,A[4]+B[0]. Исписати низ С.
#include <stdio.h>
#define MAX 5

void palindrom(int a[],int b[],int c[])
{
    for(int i=0;i<MAX;i++)
    {
        c[i]=a[i]+b[MAX-1-i];
        
    }
}
int main()
{
    int a[MAX],b[MAX], c[MAX];
    printf("Unesite niz: \n");
    for(int i=0;i<MAX;i++)
    {
        printf("element %d: ",i+1);
        scanf("%d",&a[i]);
    }
    printf("ZA niz b: ");
    for(int i=0;i<MAX;i++)
    {
        printf("element %d: ",i+1);
        scanf("%d",&b[i]);
    }
    palindrom(a,b,c);
    for(int i=0;i<MAX;i++)
    {
        printf("%d ",c[i]);
    }
}