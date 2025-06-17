//Саставити програм који за унети низ реалних бројева, дужине n, исписује елемент највеће
//вредности, као и његове позиције у низу. 
#include <stdio.h>
#define MAX 100

int najveci(int niz[],int n)
{
    int max=niz[0];
    for(int i=0;i<n;i++)
    {
        if(niz[i]>max)
        {
            max=niz[i];
        }
    }return max;
}
int main()
{
    int niz[MAX],n;
    printf("Unesite n: ");
    scanf("%d",&n);
    printf("Unesite niz: \n");
    for(int i=0;i<n;i++)
    {
        printf("element %d :",i+1);
        scanf("%d",&niz[i]);
    }
    int maks=najveci(niz,n);
    printf("Najveci element je %d",maks);

}