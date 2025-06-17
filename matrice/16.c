#include <stdio.h>

#define MAX 100 


void unosMatrice(int A[MAX][MAX], int redovi, int kolone) {
    printf("Unesite elemente matrice (%dx%d):\n", redovi, kolone);
    for (int i = 0; i < redovi; i++) {
        for (int j = 0; j < kolone; j++) {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }
}
void ispisMatrice(int A[MAX][MAX], int redovi, int kolone) {
    printf("Matrica:\n");
    for (int i = 0; i < redovi; i++) {
        for (int j = 0; j < kolone; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
}
void nova(int a[MAX][MAX], int kolone, int k)
{
    
    for(int i=0;i<kolone-1;i++)
    {
        for(int j=0;j<kolone-i-1;j++)
        {
            if(a[k][j]>a[k][j+1])
            {
                int temp=a[k][j];
                a[k][j]=a[k][j+1];
                a[k][j+1]=temp;
            
            }
        }
    }
}

int main() {
    int A[MAX][MAX]; 
    int redovi, kolone, k;


    printf("Unesite broj redova: ");
    scanf("%d", &redovi);
    printf("Unesite broj kolona: ");
    scanf("%d", &kolone);


    unosMatrice(A, redovi, kolone);

    printf("\nOriginalna matrica:\n");
    ispisMatrice(A, redovi, kolone);

    printf("\nUnesite indeks vrste (0 do %d) koju zelite da sortirate: ", redovi - 1);
    scanf("%d", &k);

    if (k >= 0 && k < redovi) {
  
        sortirajVrstu(A, kolone, k);

        printf("\nMatrica nakon sortiranja %d. vrste:\n", k);
        ispisMatrice(A, redovi, kolone);
    } else {
        printf("Greska: Indeks vrste je van opsega!\n");
    }

    return 0;
}