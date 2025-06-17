// /10.7. Саставити програм за израчунавање и исписивање аритметичке средине задатог низа (дужине
//n) целих бројева. 
#include <stdio.h>
#define MAX 100
float ari(int niz[],int n)
{
    int suma=0;
    for(int i=0;i<n;i++)
    {
        suma+=niz[i];
    }return (float)suma/n;
}
int main()
{
    int niz[MAX];
    int n;
    printf("Unesite n: ");
    scanf("%d",&n);
    printf("Unesite niz: ");
    for(int i=0;i<n;i++)
    {
        printf("Elemnet %d: ",i+1);
        scanf("%d",&niz[i]);
    }
    float aritmeticka=ari(niz,n);
    printf("ARitmeticka sredina je: %.2f",aritmeticka);

}
