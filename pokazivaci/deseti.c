#include <stdio.h>
#define MAX 100

int  min(int *niz,int n)
{
    int min1=*niz;
    for(int i=0;i<n;i++)
    {
        if(*(niz+i)>min1)
        {
            min1=*(niz+i);
        }
    }return min1;
}
int max(int *niz,int n)
{
    int max=*niz;
    
    for(int i=0;i<n;i++)
    {
        if(*(niz+i)<max)
        {
            max=*(niz+i);
        }
    }return max;
}
int ari(int *niz,int n)
{
    int s=0;
    float ari=0;
    for(int i=0;i<n;i++)
    {
        s+=*(niz+i);
        
    }return s/n;
}
int main()
{
    int niz[MAX],n;
    printf("Unesite broj elemenata: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("element %d: ",i+1);
        scanf("%d",&niz[i]);

    }
    int mini=min(niz,n);
    int maxi=max(niz,n);
    int avg=ari(niz,n);
    printf("Minimalna je %d\n",mini);
    printf("Maksimalna je %d\n",maxi);
    printf("Avg je %d\n",avg);


}