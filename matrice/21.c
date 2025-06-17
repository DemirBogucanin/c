#include <stdio.h>
#define MAX 100

int main()
{
    int mat[MAX][MAX],n,m,x,suma=0;
    int maxv[MAX], minv[MAX], maxk[MAX], mink[MAX];
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
         minv[i]=mat[i][0];
         maxv[i]=mat[i][0];
         mink[i]=mat[0][i];
         maxk[i]=mat[0][i];
         for(int j=0;j<n;j++)
         {
            if(mat[i][j]<minv[i]) minv[i]=mat[i][j]; 
            if(mat[i][j]>maxv[i]) maxv[i]=mat[i][j]; 
            if(mat[j][i]<mink[i]) mink[i]=mat[j][i]; 
            if(mat[j][i]>maxk[i]) maxk[i]=mat[j][i];
         }
    }
    
}