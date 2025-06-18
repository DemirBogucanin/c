//Napisati program kojim se vrši skraćivanje 
//razlomka A/B. A i B su prirodni brojevi.

#include <stdio.h>
int main()
{
    int a,b;
    int temp=0;
    printf("Unesite a: ");
    scanf("%d",&a);
    printf("Unesite b: ");
    scanf("%d",&b);
    int a1=a,b1=b;
    while(b!=0)
    {
        temp=b;
        b=a%b;
        a=temp;
    }
    a1/=a;
    b1/=a;
    printf("%d %d",a1,b1);
}