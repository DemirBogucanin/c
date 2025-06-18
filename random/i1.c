//izracunati zbir matrice 4x4 gde moras da ide od pocetak matrie na dole i uijes krug do sredine

#include <stdio.h>
#define MAX 100

void ispis(int a[MAX][MAX],int redovi, int kolone,int niz[],int *duzina)
{
    int k=0;
    for(int i=0;i<redovi;i++)
    {
        niz[k++]=a[i][0];
    }
    for(int j=1;j<kolone;j++)
    {
        niz[k++]=a[redovi-1][j];
    }
    for(int i=redovi-2;i>=0;i--)
    {
        niz[k++]=a[i][kolone-1];
    }
    for(int j=kolone-2;j>=0;j--)
    {
        niz[k++]=a[0][j];
    }
    for(int i=1;i<redovi-1;i++)
    {
        niz[k++]=a[i][1];
    }
    for(int j=1;j<kolone-1;j++)
    {
        niz[k++]=a[redovi-2][j];
    }
    for(int i=redovi-3;i>0;i--)
    {
        niz[k++]=a[i][kolone-2];
    }
    for(int j=kolone-3;j>1;j--)
    {
        niz[k++]=a[1][j];
    }
    *duzina=k;


}
int main() {
    int matrica[MAX][MAX] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    int redovi = 4, kolone = 4;
    int niz[MAX];
    int duzina;
    ispis(matrica, redovi, kolone, niz, &duzina);
    printf("Elementi matrice u spirali su:\n");
    for (int i = 0; i < duzina; i++) {
        printf("%d ", niz[i]);
    }
    printf("\n");

    return 0;
}
