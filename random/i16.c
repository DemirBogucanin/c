#include <stdio.h>
#define MAX 100

void levo(int niz[MAX],int n)
{
    int temp=niz[0];
    for(int i=0;i<n-1;i++)
    {
        niz[i]==niz[i+1];
    }
    niz[n-1]=temp;
}
int main()
{
    int niz[MAX],mat[MAX][MAX],n=0,broj;
    while(1)
    {
        scanf("%d",&broj);
        if(broj==0)
        {
            break;
        }
        niz[n++]=broj;
    }for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            mat[i][j]=niz[j];
        }levo(niz,n);
    }for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    
    return 0;

}