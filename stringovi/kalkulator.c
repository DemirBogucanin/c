#include <stdio.h>
#include <string.h>
#include <ctype.h> 
#include <stdlib.h>

#define MAX 100

int main()
{
    int znak,nepoznat=0;
    double broj1,broj2;
    char s[MAX+1];
    while(1)
    {
        printf("Prvi broj");
        fgets(s,MAX+1,stdin);
        if (!isdigit(s[0]) && s[0]!='-')
        {
            break;
        }broj1=atof(s);
        printf("Durugi broj :");
        fgets(s,MAX+1,stdin);
        if(!isdigit(s[0]) && s[0]!='-')
        {
            break;
        }broj2=atof(s);
        printf("Operator :");
        znak=getchar();
        switch (znak)
        {
            case'+':printf("Rezultat : %f\n",broj1+broj2);
                    break;
            case'-':printf("Rezulatat: %f\n",broj1-broj2);
                    break;
            case'*':printf("Rezulatat: %f\n",broj1*broj2);
                    break;
            case'/':printf("Rezulatat: %f\n",broj1/broj2);
                    break;
            default: printf("Nepoznat operator\n");
                    nepoznat=1;
                    break;
        }
    }
    
    
}
