#include <stdio.h>

void DivIMod(int x, int y, int *div, int *mod)
{
    printf("\nKolicnik postavljem na adresu: %p", div);
    printf("\nOstatak postavljem na adresu: %p", mod);
    *div = x / y; 
    *mod = x % y;  
}

int main()
{
    int a, b, div, mod;

    printf("\nUnesite vrednost a: ");
    scanf("%d", &a);
    printf("Unesite vrednost b: ");
    scanf("%d", &b);

    printf("\nAdresa promenljive div: %p", &div);
    printf("\nAdresa promenljive mod: %p", &mod);

    
    DivIMod(a, b, &div, &mod);

    
    printf("\nVrednost promenljive div: %d", div);
    printf("\nVrednost promenljive mod: %d", mod);

    

    return 0;
}
