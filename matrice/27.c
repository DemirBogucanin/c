#include <stdio.h>
#define MAX 100

int main()
{
    int m,n,matrica[MAX][MAX],S=0,vrsta;
    printf("Unesite m:");
    scanf("%d",&m);
    printf("Unesite n:");
    scanf("%d",&n);
    printf("Unesite elemente :\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("Element [%d][%d]= ",i,j);
            scanf("%d",&matrica[i][j]);
        }
    }for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",matrica[i][j]);
        }printf("\n");
    }printf("Unesite broj vrste :");
    scanf("%d",&vrsta);
    for(int j=0;j<n;j++)
    {
        S+=matrica[vrsta-1][j];
    }printf("Vrsta ima zbir :%d",S);
}