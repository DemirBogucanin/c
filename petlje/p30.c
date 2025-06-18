//Саставити програм који за унети природни број исписује број чије су цифре у обрнутом
//редоследу унетог броја.
#include <stdio.h>
int main()
{
    int n,obrnuti=0;
    printf("Unesite broj");
    scanf("%d",&n);
    while(n>0)
    {
        int broj=n%10;
        obrnuti=obrnuti*10+broj;
        n/=10;
    }printf("Obrnuti broj je %d",obrnuti);
}