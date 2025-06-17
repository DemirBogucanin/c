#include <stdio.h>
#define MAX 100

int ponavljanje(int *s,int n,int broj)
{
    int brojac=0;
    for(int i=0;i<n;i++)
    {
        if(*(s+i)==broj)
        {
            brojac++;
        }
    }return brojac;
}
int main() {
    int s[] = {1, 2, 3, 1, 4, 1};
    int n = 6;
    int broj = 1;

    printf("Broj %d se pojavljuje %d puta.\n", broj, ponavljanje(s, n, broj));

    return 0;
}