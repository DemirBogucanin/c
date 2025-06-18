#include <stdio.h>

int main()
{
    int matrica[3][3]=
    {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    printf("Matrica 3x3 je:\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d",matrica[i][j]);
        }printf("\n");
    }
}
