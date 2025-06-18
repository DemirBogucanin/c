//6.	Napisati program kojim se ispisuje položaj tačke A(xi,yi) u odnosu na kružnicu poluprečnika r.
//Napomena: Tačka je na kružnici ukoliko je x2 + y2 = r2. Van kružnice je ukoliko je x2 + y2> r2, a u kružnici je ukoliko je x2 + y2< r2.
#include <stdio.h>
int main()
{
    int x,y,r;
     printf("Unesite x koordinatu tačke A: ");
    scanf("%f", &x);
    printf("Unesite y koordinatu tačke A: ");
    scanf("%f", &y);
    printf("Unesite poluprečnik kružnice: ");
    scanf("%f", &r);
    if(x*x+y*y==r*r)
    {
        printf("Na kruznici");
    }
    else if(x*x+y*y>r*r)
    {
        printf("Van kruznice");
    }
    else
    {
        printf("U kruznici");
    }
}