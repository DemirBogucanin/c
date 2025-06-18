//34.	Napisati program kojim se određuje proizvod cifara celog broja n, a zatim ispisuje ako je deljiv sa k.
#include <stdio.h>
int main()
{
    int n,k,proizvod=1;
    printf("Unesite n: ");
    scanf("%d",&n);
    printf("Unesite k: ");
    scanf("%d",&k);
    int temp=n;
    while (temp>0)
    {
        int broj=temp%10;
        proizvod*=broj;
        temp/=10;
        

    }if (proizvod % k == 0) {
        printf("Proizvod cifara %d je deljiv sa %d.\n", proizvod, k);
    } else {
        printf("Proizvod cifara %d nije deljiv sa %d.\n", proizvod, k);
    }
    
}