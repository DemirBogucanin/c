//5.	Napisati program kojim se učitavaju koordinate tačke A(xi,yi) i ispisuje da li tačka pripada pravoj y=3x+7.
//Napomena: Ako tačka A(xi,yi) leži na pravoj y=3x+7 tada koordinate tačke zadovoljavaju jednačinu y=3x+7.
#include <stdio.h>
int main()
{
    int xi,yi;
    printf("Unesite xi i yi: ");
    scanf("%d %d",&xi,&yi);
    if(yi==3*xi+7)
    {
        printf("Pripada");
    }else
    {
        printf("Ne pripada");
    }
}