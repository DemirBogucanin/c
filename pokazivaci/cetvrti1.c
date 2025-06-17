#include <stdio.h>
#include <ctype.h> 

void tekst(int *mala, int *velika, int *cifre, int *beline, int *redovi) {
    char s; 
    while ((s = getchar()) != EOF) {
        if (islower(s)) {
            (*mala)++;
        } else if (isupper(s)) {
            (*velika)++;
        } else if (isdigit(s)) {
            (*cifre)++;
        } else if (s == ' ' || s == '\t') {
            (*beline)++;
        } else if (s == '\n') {
            (*redovi)++;
        }
    }
}

int main() {
    int mala = 0, velika = 0, cifre = 0, beline = 0, redovi = 0;

    printf("Unesite tekst (zavrsava se sa EOF):\n");
    tekst(&mala, &velika, &cifre, &beline, &redovi);

    printf("\nStatistika:\n");
    printf("Mala slova: %d\n", mala);
    printf("Velika slova: %d\n", velika);
    printf("Cifre: %d\n", cifre);
    printf("Beline: %d\n", beline);
    printf("Linije: %d\n", redovi);

    return 0;
}
