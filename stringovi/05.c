#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX 100

void obrtanje(char s[], int n)
{
    n=strlen(s);
    for(int i=n-1;i>0;i--)
    {
        printf("%s ",s[i]);
    }
}
int main()
{
    char s[MAX+1];
    int n;
    printf("Unesite string: ");
    fgets(s,MAX,stdin);
    s[strcspn(s,'\n')]='\0';
    obrtanje(s,n);
    
}