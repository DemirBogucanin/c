#include <stdio.h>
#define MAX 100

void obrtanje(int *a,int n)
{
    int *p1=a,*p2=a+n-1;
    int temp;
    while(p1<p2)
    {
        temp=*p1;
        *p1=*p2;
        *p2=temp;
        p1++;
        p2--;
    }
}int main()
{
    int n, a[MAX];
    
    
    printf("Unesite broj elemenata: ");
    scanf("%d", &n);
    
    
    printf("Unesite elemente niza:\n");
    for (int i = 0; i < n; i++)
    {
        printf("Element %d: ", i + 1);
        scanf("%d", &a[i]);
    }
    
    
    obrtanje(a, n);
    
    
    printf("Niz nakon obrtanja:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    
    return 0;
}