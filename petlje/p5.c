//5.	Napisati program za nalaženje najvećeg
// zajedničkog delioca za brojeve A i B.

#include <stdio.h>
int main()
{
    int a,b;
    int temp=0;
    printf("Unesite a: ");
    scanf("%d",&a);
    printf("Unesite b: ");
    scanf("%d",&b);
    while(b!=0)
    {
        temp=b;
        b=a%b;
        a=temp;
    }
    printf("%d",a);
}