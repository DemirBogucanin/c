#include <stdio.h>
#define MAX 100


void unosNiza(int X[MAX], int n) {
    printf("Unesite elemente niza X (%d elemenata):\n", n);
    for (int i = 0; i < n; i++) {
        printf("X[%d] = ", i);
        scanf("%d", &X[i]);
    }
}
void formirajNizY(int X[MAX],int Y[MAX],int n,int *m)
{
    for(int i=0;i<n;i++)
    {
        int pronadjen=0;
        for(int j=0;j<*m;j++)
        {
            if(X[i]==Y[j])
            {
                pronadjen=1;
                break;
            }
        }if(!pronadjen)
        {
            Y[*m]=X[i];
            (*m)++;
        }
    }
}


void ispisNiza(int Y[MAX], int m) {
    printf("Elementi niza Y:\n");
    for (int i = 0; i < m; i++) {
        printf("%d ", Y[i]);
    }
    printf("\n");
}

int main() {
    int X[MAX], Y[MAX];
    int n, m;


    printf("Unesite broj elemenata niza X: ");
    scanf("%d", &n);


    unosNiza(X, n);


     formirajNizY(X, Y, n, &m);

     ispisNiza(Y, m);

    return 0;
}
