//Саставити програм који испитује да ли је унети број Нивенов. Нивенов број је број који је
//дељив са сумом својих цифара.
#include <stdio.h>

int main()
{
    int n,s=0;
    printf("Unesite n: ");
    scanf("%d",&n);
    int k=n;
    while(k>0)
    {
        s+=k%10;
        k/=10;
    }if(n%s==0)
    {
        printf("Steje nivenov");
    }else
    {
        printf("Nije");
    }
}