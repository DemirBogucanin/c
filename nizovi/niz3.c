//Саставити програм који учита елементе низа A A A A = ( 1 2 , ,..., n ) дужине n и низа
//B B B B = ( 1 2 , ,..., m ) дужине m, а затим формира и исписује низ С који се састоји од парних елемената
//низа А и низа В. 
#include <stdio.h>
#define MAX 100

int main()
{
    int a[MAX],b[MAX],c[MAX];
    int n;
    int brojac;
    printf("Unesite n: ");
    scanf("%d",&n);
    int m;
    printf("Unesite m: ");
    scanf("%d",&m);
    printf("Unesite niz za a: \n");
    for(int i=0;i<n;i++)
    {
        printf("element %d :",i+1);
        scanf("%d",&a[i]);
        if(a[i]%2==0)
        {
            c[brojac]=a[i];
            brojac++;
        }
    }
    printf("Unesite niz za b: \n");
    for(int i=0;i<m;i++)
    {
        printf("element %d :",i+1);
        scanf("%d",&b[i]);
         if(b[i]%2==0)
        {
            c[brojac]=b[i];
            brojac++;
        }
    }
    printf("Niz c: \n");
    for(int i=0;i<brojac;i++)
    {
        printf("%d ",c[i]);
    }
    
}