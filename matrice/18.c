#include <stdio.h>
#define MAX 100

void noviNiz (int a[MAX][MAX],int k,int l,int niz[MAX])
{
    int indeks=0;
    for(int i=0;i<k;i++)
    {
        niz[indeks++]=a[i][0];

    }
    for(int i=k-1;i>k/2;i--)
    {
        niz[indeks++]=a[i][k-i-1];
    }
    for(int j=0;j<l/2;j++)
    {
        niz[indeks++]=a[k/2][j];
    }
}