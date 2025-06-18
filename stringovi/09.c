#include <stdio.h>
#include <string.h>
#include <ctype.h>  

#define MAX 100

void velika(char s[])
{
    int n=0;
    n=strlen(s);
    for(int i=0;i<n;i++)
    {
        if (islower(s[i]))
        {
            s[i]=toupper(s[i]);
        }
    }
}int main()
{
    char s[MAX+1];
    printf("Unesite rec");
    fgets(s,MAX+1,stdin);
    velika(s);
    printf("U velika: %s",s);
}