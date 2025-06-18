#include <stdio.h>
#include <stdlib.h>


void neopadajuc(int *niz,int n)
{
    for(int i=1;i<n;i++)
    {
        int temp=niz[i];
        int j=i-1;
        while (j>=0 && niz[j]>temp)
        {
            niz[j+1]=niz[j];
            j--;
        }niz[j+1]=temp;
    }   
}
int main() {
    int n;
    printf("Unesi broj elemenata niza: ");
    scanf("%d", &n);

    int *niz = (int*)malloc(n * sizeof(int));  // Динамичко алоцирање меморије за низ

    if (niz == NULL) {
        printf("Greska pri alociranju memorije.\n");
        return 1;
    }

    printf("Unesite niz: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &niz[i]);
    }

    // Позив функције за сортирање
    neopadajuc(niz, n);

    // Испис резултата
    printf("Uređeni niz u opadajućem redosledu: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", niz[i]);
    }
    printf("\n");

    // Ослобађање динамички алоциране меморије
    free(niz);

    return 0;
}