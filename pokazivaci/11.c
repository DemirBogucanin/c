#include <stdio.h>
#include <ctype.h>
#define MAX 100


void malo(char *niz)
{
    while(*niz != '\0') 
    {
        if(islower(*niz))  
        {
            *niz = toupper(*niz);
        }
        niz++;  
    }
}

int main()
{
    char niz[MAX];
    
   
    printf("Унесите стринг: ");
    fgets(niz, sizeof(niz), stdin);  
    malo(niz);

    printf("Стринг након замене: %s\n", niz);
    
    return 0;
}
