//2.	Napisati program kojim se ispituju sve mogućnosti da pri jednom bacanju kockice zbir brojeva bude dati broj S.
//Na primer: Za S=5 rešenja su 1,1,3   1,2,2...

#include <stdio.h>

int main()
{
    int s;
    printf("Unesite s:");
    scanf("%d",&s);
    for(int i=1;i<=6;i++)
    {
        for(int j=1;j<=6;j++)
        {
            for(int k=1;k<=6;k++)
            {
                if(i+j+k==s)
                {
                    printf("%d %d %d\n",i,j,k);
                }
            }
        }
    }
}
