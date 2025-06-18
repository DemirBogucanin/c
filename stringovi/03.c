#include <stdio.h>
#include <string.h>
#include <ctype.h> 
#include <stdlib.h>


#define MAX 100

int broj(char c, int b)
{
    if(isdigit(c))
    {
        if(c-'0'<b)
        {
            return c-'0';
        }
    }
    if('a'<=c && 'f'<=c && b>=16)
    {
        return c-'a'+10;
    }
}int gas(char s[],int b)
{
    int suma=0,i,broj;
    
}

