#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p;
    p=(int*)malloc(sizeof(int));
    if(p==NULL)
    {
        printf("\n greska");
        return 1;
    }
    printf("Unesite ceo broj");
    scanf("%d",p);
    printf("Uneli ste %d",*p);
    free(p);

}
