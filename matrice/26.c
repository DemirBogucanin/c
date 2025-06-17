#include <stdio.h>

int main()
{
    int matrica[3][3],transportovana[3][3];
    printf("Unesite matricu :\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("Element [%d][%d]",i,j);
            scanf("%d",&matrica[i][j]);
        }

    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",matrica[i][j]);
        }printf("\n");
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            transportovana[j][i]=matrica[i][j];
        }

    
    }printf("Transportovana matrica je:\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            
            printf("%d ",transportovana[i][j]);
        }printf("\n");
    }
}
