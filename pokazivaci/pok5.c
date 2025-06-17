#include <stdio.h>

void ipsis(int *p,int n, int m)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;i<m;j++)
        {
            printf("%d ",*(p+i*n+j));
        }printf("\n");
    }
}
int main() {
    int niz[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int m = 2, n = 3;
    ispis((int *)niz, m, n);

    return 0;
}