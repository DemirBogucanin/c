#include <stdio.h>

int main()
{
    int matrica1[3][3],matrica2[3][3],suma[3][3];
    printf("Unesite matricu1 :\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("Element [%d][%d]",i,j);
            scanf("%d",&matrica1[i][j]);
        }

    }printf("Unesite matricu2 :\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("Element [%d][%d]",i,j);
            scanf("%d",&matrica2[i][j]);
        }

    }for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            suma[i][j]=matrica1[i][j]+matrica2[i][j];
  
        }
    }printf("Suma matrica 3x3:\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ", suma[i][j]);
        }printf("\n");
    }
}
