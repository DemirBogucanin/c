#include <stdio.h>
#include <string.h>
#define MAX 100
int main()
{
    char s[MAX +1];
    int n=0;
    printf("Unesite string :");
    fgets(s,MAX +1,stdin);
    while (s[n]!='\0'){
        n++;
    }
    printf("DUzina stringa je %d",n);
}