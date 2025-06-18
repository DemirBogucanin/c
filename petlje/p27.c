//Саставити програм за израчунавање суме s квадрата парних и кубова непарних природних
//бројева од n до m (n<m). 
#include <stdio.h>
int main()
{
    int n, m, s1 = 0, s2 = 0, s = 0;

    printf("Unesite n: ");
    scanf("%d", &n);
    printf("Unesite m: ");
    scanf("%d", &m);

    if (n >= m) {
        printf("Greska: n mora biti manje od m.\n");
        return 1;
    }

    while (n <= m)
    {
        if (n % 2 == 0) {
            s2 += n * n;
        } else {
            s1 += n * n * n;
        }
        n++; 
    }

    s = s1 + s2;
    printf("Suma je: %d\n", s);

    return 0;
}
