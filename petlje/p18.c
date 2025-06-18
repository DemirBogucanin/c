//27.	Napisati program za određivanje sume trocifrenih brojeva 
//kod kojih je zbir prve i druge cifre jednak trećoj , a proizvod druge i treće cifre deljiv sa 2. 

#include <stdio.h>
int main()
{
    int suma=0;
    int a,b,c;
    for(int i=100;i<1000;i++)
    {
        a=i/100;
        b=(i/10)%10;
        c=(i%10)%10;
        if(a+b==c && (b*c)%2==0)
        {
            suma+=i;
        }
    }printf("%d",suma);
}