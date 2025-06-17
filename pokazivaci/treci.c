#include <stdio.h>

void gas(int x,int y,int *c,int *o)
{
    printf("kolicnik je postavljen na adresu %p\n",c);
    printf("Ostatak je postavljen na adresu %p\n",o);
    *c=x/y;
    *o=x%y;
}
int main()
{
    int a,b,c,o;
    printf("Unesite a=");
    scanf("%d",&a);
    printf("Unesite b=");
    scanf("%d",&b);
    printf("Adresa kolicnika je: %p\n",&c);
    printf("Adresa ostatka je: %p\n",&o);
    gas(a,b,&c,&o);
    printf("Adresa kolicnika je : %d\n",c);
    printf("Adresa ostatka je :%d\n",o);

    
}