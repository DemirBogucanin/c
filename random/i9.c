#include <stdio.h>
#include <math.h>

int main()
{
    float s=0;
    int n;
    int f=1;
   
    printf("Unesite n: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        f*=i;
        s+=pow(i,2*i)/pow(f,i+1)*(2*i-1);
        
    }
    printf("%.2f",s);
}