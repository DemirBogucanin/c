#include <stdio.h>
#define MAX 100

int main()
{
    int mat[MAX][MAX],n,m,vrsta,suma=0;
    printf("Unsite dimenzije matrice (mxn) :");
    scanf("%d %d", &m, &n);
    printf("Unesite elemente matrice :");
    for (int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("element [%d][%d]",i,j);
            scanf("%d",&mat[i][j]);
        }
    }for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",mat[i][j]);
        }printf("\n");
    }
    
    for(int i=0;i<m;i++)
    {
        for (int j=0;j<n;j++)
        {
            suma+=mat[i][j];
        }printf("%d ",suma);
    }
    
}