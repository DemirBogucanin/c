#include <stdio.h>
#define MAX 100

void obrnuti(int *s,int n)
{
    int temp;
    for(int i=0;i<n/2;i++)
    {
        temp=s[i];
        s[i]=s[n-i-1];
        s[n-i-1]=temp;
    }
}
int main()
{
    int niz[MAX],n;
    printf("Unesite broj elemenata niza: ");
    scanf("%d",&n);
    printf("Unesite elmenete niza: ");
    for(int i=0;i<n;i++)
    {
        printf("Element %d :",i+1);
        scanf("%d",&niz[i]);
    }
    obrnuti(niz,n);
     for (int i = 0; i < n; i++) {
        printf("%d ", niz[i]);
     }
}
    
