#include <stdio.h>
#define MAX 100

int najmanji(int *a, int n)
{
    int min=*a;
    for(int i=1;i<n;i++)
    {
        if(*(a+i)<min)
        {
            min=*(a+i);
        }
    }return min;
}
int main()
{
    int n,a[MAX];
    printf("Unesite broj elemenata: ");
    scanf("%d",&n);
    printf("Unesite elemente: ");
    for(int i=0;i<n;i++)
    {
        printf("Element: %d: ",i+1);
        scanf("%d",&a[i]);
    }
    int najm=najmanji(a,n);
    printf("Najmanji element je %d: ",najm);

}