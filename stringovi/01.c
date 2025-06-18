#include <stdio.h>
#include <ctype.h>
#define MAX 100

void Ucitaj(char s[])
{
    int c,i=0;
    while ((c=getchar()) !=EOF && !isspace(c))
    {
        s[i++]=c;
    }


}int main()
{
    char s[MAX+1];
    printf("Unesite vise reci :");
    Ucitaj(s);
    printf("%s",s);
}