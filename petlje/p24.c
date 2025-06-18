	//Napisati program kojim se određuje suma :
//S=n/3^2 -n/6^2 +⋯+(-1)^(n+1)  n/(3n)^2 
#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    float s=0;
    printf("Unesit n; ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        float clan=(float)n/pow(3*i,2);
        if(i%2==0)
        {
            s-=clan;
        }else
        {
            s+=clan;
        }
    }printf("%.2f",s);
        
}