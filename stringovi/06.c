#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX 100

void ulevo(char s[])
{
    int n=strlen(s);
    char pom=s[0];
    for(int i=0;i<n-1;i++)
    {
        s[i]=s[i+1];
        
    }s[n-1]=pom;
    
}int main()
{
    char s[MAX+1],c;
    int n,j;
    printf("Unesite string: ");
    fgets(s,MAX+1,stdin);
    
    ulevo(s);
    printf("Novi string je: %s",s);

}