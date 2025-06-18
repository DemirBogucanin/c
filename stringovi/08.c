#include <stdio.h>
#include <string.h>
#include <ctype.h>  

#define MAX 100

void palindrom(char s[])
{
    int n = strlen(s);
    int k = 0;
    s[strcspn(s, "\n")] = '\0';

    for (int i = 0; i < n / 2; i++)
    {
        if (s[i] != s[n - i - 1])
        {
            k = 1;
            break;
        }
    }

    if (k == 0)
    {
        printf("Rec je palindrom\n");
    }
    else
    {
        printf("Rec nije palindrom\n");
    }
}

int main()
{
    char s[MAX + 1];
    printf("Unesite rec: ");
    fgets(s, MAX + 1, stdin);
    palindrom(s);

    return 0;
}
