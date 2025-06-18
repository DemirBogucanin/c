#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,*a;
    printf("Unesite n:");
    scanf("%d",&n);
    a=(int*)malloc(n*sizeof(int));
    if(a==NULL)
    {
        return 1;
    }
    printf("Elementi niza su: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }printf("Obrnuti niz: ");
    for(int i=1;i<n;i++)
    {
        int temp=a[i];
        int j=i-1;
        while(j>=0 && a[j]>temp)
        {
            a[j+1]=a[j];
            j--;
        }a[j+1]=temp;
    }for(int i=0;i<n;i++)

    {
        printf("%d",a[i]);
    }free(a);
}