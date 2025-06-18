// /Саставити програм којим се: 
//а) исписује n елемената Фибоначијевог низа; 
#include <stdio.h>
int main()
{
    int i=3,f1=1,f2=1,fn,n;
    printf("Unesite n:");
    scanf("%d",&n);
    if(f1>=1)
    {
        printf("f1=%d",f1);

    }
    if(f2>=1)
    {
        printf("f2=%d",f2);
    }
    while(i<=n)
    {
        fn=f1+f2;
        f1=f2;
        f2=fn;
        printf("f%d=%d\n",i,fn);
        i++;
    }
}