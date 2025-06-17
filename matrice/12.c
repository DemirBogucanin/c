#include <stdio.h>
#define MAX 100

void unosNiza(int X[MAX], int *n) {
    printf("Unesite broj elemenata niza X: ");
    scanf("%d", n);
    
    printf("Unesite elemente niza X (%d elemenata):\n", *n);
    for (int i = 0; i < *n; i++) {
        printf("X[%d] = ", i);
        scanf("%d", &X[i]);
    }
}
void sortirajRastuce(int X[MAX],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(X[j]>X[j+1])
            {
                int temp=X[j+1];
                X[j+1]=X[j];
                X[j]=temp;
            }
        }
    }
}

void ispisNiza(int X[MAX], int n) {
    printf("Niz nakon uređivanja:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", X[i]);
    }
    printf("\n");
}

int main() {
    int X[MAX], n;


    unosNiza(X, &n);


    sortirajRastuce(X, n);

    ispisNiza(X, n);

    return 0;
}
