//30.	Napisati program koji štampa sve brojeve od N do M koji sadrže cifru 8. 
#include <stdio.h>
int main()

{
    int n,m;
    printf("Unesite n: ");
    scanf("%d",&n);
    printf("Unesite m: ");
    scanf("%d",&m);
    printf("Brojevi koji sadrze 8: \n");
    for(int i=n;i<=m;i++)
    {
        int broj=i;
        int pronadjen=0;
        while(broj>0)

        {
            if(broj%10==8)
            {
                pronadjen=1;
                break;
            }broj/=10;
        }if(pronadjen)
        {
            printf("%d\n",i);
        }
    }   
}