//3.	Napisati program kojim se nalaze 
//delitelji prirodnog broja X<1000.

#include <stdio.h>

int main()
{
    int x;
    printf("Unesite vrednost za x: ");
    scanf("%d",&x);
    if(x<=0 || x>=1000)
    {
        printf("Broj ne vazi");
    }
    for(int i=1;i<=x;i++)
    {
        if(x%i==0)
        {
            printf("%d\n",i);
        }
    }
}