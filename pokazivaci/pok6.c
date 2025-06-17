#include <stdio.h>
#define MAX 100
#include <string.h>

int palindrom(char *s,int n)
{
    n=strlen(s);
    for(int i=0;i<n/2;i++)
    {
        if (*(s+i)!=*(s+n-1-i))
        {
            return 0;
        }
       
    }
}
int main() {
    char s[] = "radar";
    int n;

    if (palindrom(s,n)) {
        printf("String je palindrom.\n");
    } else {
        printf("String nije palindrom.\n");
    }

    return 0;
}