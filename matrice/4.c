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
int postoji(int a[MAX][MAX],int redovi, int kolone, int b)
{
    for(int j=0;j<kolone;j++)
    {
        int pronadjen=0;
        for(int i=0;i<redovi;i++)
        {
            if(a[i][j]==b)
            {
                pronadjen= 1;
                break;
            }
        }if(!pronadjen)
        {

            return 0;
        }
    }return 1;
}


int main() {
    int A[MAX][MAX]; 
    int redovi, kolone;
    int b;


    printf("Unesite broj redova: ");
    scanf("%d", &redovi);
    printf("Unesite broj kolona: ");
    scanf("%d", &kolone);
    printf("Unesite broj b: ");
    scanf("%d", &b);


    unosMatrice(A, redovi, kolone);

  
    if (postoji(A, redovi, kolone,b)) {
        printf("Matrica je pronadjena.\n");
    } else {
        printf("Matrica nije pronadjena.\n");
    }

    return 0;
}
