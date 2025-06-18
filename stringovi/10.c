#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX 100

void ukloni(char s[],char c)
{
    int n=strlen(s);
    int j=0;
    for(int i=0;i<n;i++)
    {
        if (s[i]!=c)
        {
            s[j]=s[i];
            j++;
        }
    }s[j]='\0';
}
int main()
{
    char s[MAX+1],c;
    int n,j;
    printf("Unesite string: ");
    fgets(s,MAX+1,stdin);
    printf("Unesite karakter koji zelite da uklonite");
    scanf("%c",&c);
    ukloni(s,c);
    printf("bez datog karaktera %c: %s",c,s);

}