#include <stdio.h>
#define MAX 100

void rotiraj(int a[], int n)
{
    for (int i = 0; i < n - 1; i += 2)  
    {
        int pom = a[i];
        a[i] = a[i + 1];
        a[i + 1] = pom;
    }
}

int main()
{
    int a[MAX], n, x;
    printf("Unesite broj elemenata: ");
    scanf("%d", &n);
    printf("Unesite elemente niza:\n");
    for (int i = 0; i < n; i++)
    {
        printf("Element %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    printf("Unesite x (broj rotacija parova): ");
    scanf("%d", &x);

    
    x = x % (n / 2);

    for (int i = 0; i < x; i++)
    {
        rotiraj(a, n);  
    }

    printf("Rotorani niz je: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
