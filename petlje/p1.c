//drugi najveci broj
#define MAX 100
int min_parni_broj(int niz[MAX],int n)
{
    int min=niz[0];
    for(int i=0;i<n;i++)
    {
        if(niz[i]%2==0){
            if(niz[i]<min)
            {
                min=niz[i];
                
            }
        }
    }return min;
}

#include <stdio.h>

int main() {
    int niz[MAX], n;

    printf("Unesite broj elemenata: ");
    scanf("%d", &n);

    printf("Unesite elemente niza: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &niz[i]);
    }

    int rezultat = min_parni_broj(niz, n);

    if (rezultat == -1) {
        printf("Nema parnih brojeva u nizu.\n");
    } else {
        printf("Najmanji parni broj je: %d\n", rezultat);
    }

    return 0;
}

