#include <stdio.h>
#define MAX 100

void unos(int a[MAX][MAX],int redovi,int kolone)
{
    for(int i=0;i<redovi;i++)
    {
        for(int j=0;j<kolone;j++)
        {
            printf("Element [%d][%d] :",i,j);
            scanf("%d",&a[i][j]);
        }
    }
}
int suma(int a[MAX][MAX],int kolone,int k)
{
    int s=0;
    for(int j=0;j<kolone;j++)
    {
        s+=a[k][j];
    }return s;
}
void ispis(int a[MAX][MAX],int redovi, int kolone)
{
    for(int i=0;i<redovi;i++)
    {
        for(int j=0;j<kolone;j++)
        {
            printf("%d ",a[i][j]);
        }printf("\n");
    }
}
int main()
{
    int a[MAX][MAX],redovi,kolone,k;
    printf("Unesite broj redova i kolona :");
    scanf("%d %d",&redovi,&kolone);
    unos(a,redovi,kolone);
    ispis(a,redovi,kolone);
    printf("Unesite broj vrste za njegov zbir :");
    scanf("%d",&k);
    int zbir=suma(a,kolone,k);
    printf("zbir je %d",zbir);

}