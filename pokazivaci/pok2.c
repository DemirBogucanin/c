#include <stdio.h>

void zamena(int *s,int *p)
{
    int temp;
    temp=*s;
    *s=*p;
    *p=temp;
}
int main() {
    int x = 5, y = 10;

    printf("Pre zamene: x = %d, y = %d\n", x, y);
    zamena(&x, &y);
    printf("Posle zamene: x = %d, y = %d\n", x, y);

    return 0;
}