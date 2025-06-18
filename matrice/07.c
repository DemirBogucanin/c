#include <stdio.h>
#define MAX 100

void unosMatrice(int A[100][100], int redovi, int kolone) {
    printf("Unesite matricu A:\n");
    for (int i = 0; i < redovi; i++) {
        for (int j = 0; j < kolone; j++) {
            scanf("%d", &A[i][j]);
        }
    }
}

int indeksNajvecegElementaA(int a[MAX][MAX], int i, int kolone) {
    int min=a[i][0];
    
    for(int j=1;j<kolone;j++)
    {
        
        if(a[i][j]<min)
        {
            min=a[i][j];
        }
    }return min;
}
int indeksNajvecegElementaB(int a[MAX][MAX], int i, int kolone) {
    
    int max=a[i][0];
    for(int j=1;j<kolone;j++)
    {
        if(a[i][j]>max)
        {
            max=a[i][j];
        }
        
    }return max;
}

void formirajNizB(int a[MAX][MAX], int b[MAX], int redovi, int kolone) {
    for (int i = 0; i < redovi; i++) {
        int min=indeksNajvecegElementaA(a,i,kolone);
        int max=indeksNajvecegElementaB(a,i,kolone);
        b[i]=max*min;  
    }
}

void ispisiNiz(int B[100], int redovi) {
    printf("Niz B:\n");
    for (int i = 0; i < redovi; i++) {
        printf("%d ", B[i]);
    }
    printf("\n");
}

int main() {
    int A[100][100], B[100];
    int redovi, kolone;
    
    
    printf("Unesite broj redova i kolona: ");
    scanf("%d %d", &redovi, &kolone);
    
  
    unosMatrice(A, redovi, kolone);
    
  
    formirajNizB(A, B, redovi, kolone);
    

    ispisiNiz(B, redovi);
    
    return 0;
}
