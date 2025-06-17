#include <stdio.h>

int main()
{
    int matrica[3][3],maks,min;
    printf("Unesite matricu :\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("Element [%d][%d] ",i,j);
            scanf("%d",&matrica[i][j]);
        }
     maks=matrica[0][0];
     min=matrica[0][0];
    }for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(matrica[i][j]>maks)
            {
                maks=matrica[i][j];
            }
            if(matrica[i][j]<min)
            {
                min=matrica[i][j];
            }

            
        }
        
        
    }

    printf("Najveci broj je %d\n",maks);
    printf("Najmanji broj je %d",min);
}
