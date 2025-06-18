// /Саставити програм за исписивање суме сваког трећег природног броја од 1 до n. Број n се
//уноси са тастатуре.
#include <stdio.h>
int main()
{

    int n,i,s=0;
    printf("Unesite n: ");
    scanf("%d",&n);
    while(i<=n)
    {
        s+=i;
        i+=3;

    }printf("Suma svakog treceg broja je %d",s);
}