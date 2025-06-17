#include <stdio.h>
#define MAX 100

void unos(int a[MAX][MAX],int redovi,int kolone)
{
    printf("Unesite elemente matrice: ");
    for(int i=0;i<redovi;i++)
    {
        for(int j=0;j<kolone;j++)
        {
            printf("Element [%d][%d] :",i,j);
            scanf("%d",&a[i][j]);
        }
    }
}
int suma(int a[MAX][MAX],int redovi,int k)
{
    int suma=0;
    for(int i=0;i<redovi;i++)
    {
        suma+=a[i][k];
    }return suma;
}
int main()
{
    int a[MAX][MAX];
    int redovi,kolone,k;
    printf("Unesite broj redova i kolona: ");
    scanf("%d %d",&redovi,&kolone);

    unos(a,redovi,kolone);
    printf("Unesite broj kolone od 0 do %d :",kolone-1);
    scanf("%d",&k);
    int suma1=suma(a,redovi,k);
    printf("Suma elemenata u %d, koloni je: %d\n",k+1,suma1);
}