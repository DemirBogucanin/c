#include <stdio.h>
#include <string.h>
#include <ctype.h> 
#include <stdlib.h>

#define MAX 100

int duzina(char s[])
{
    int n=0;
    n=strlen(s);
    return n;
}
void kopiranje(char s[],char p[])
{
    strcpy(s,p);
    puts(s);
}
void nadovezivanje(char s[],char p[])
{
    strcat(s,p);
    puts(s);
}
int poredjenje(char s[],char p[])
{
    
    if (strcmp(s,p)==0)
    {
        printf("Oni su jednkai");
    }else if(strcmp(s,p)>0)
    {
        printf("Prvi je veci od drugog");
    }else
    {
        printf("Drugi je veci od prvog");
    }return strcmp(s,p);
}
int pronadji_prvu_poziciju(char s[], char c) {
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == c) {
            return i;  // Vraća poziciju kada nađe karakter
        }
    }
    return -1;  // Ako nije pronađen, vraća -1
}

// Funkcija koja pronalazi poslednju poziciju karaktera u stringu
int pronadji_poslednju_poziciju(char s[], char c) {
    int poslednja_pozicija = -1;
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == c) {
            poslednja_pozicija = i;  // Pamti poslednju poziciju
        }
    }
    return poslednja_pozicija;  // Vraća poslednju poziciju ili -1
}

// Funkcija koja proverava da li jedan string sadrži drugi
int pronadji_podstring(char s1[], char s2[]) {
    int n1 = strlen(s1);
    int n2 = strlen(s2);

    if (n2 > n1) return -1;  // Ako je podstring duži od glavnog stringa, ne može biti pronađen

    for (int i = 0; i <= n1 - n2; i++) {
        int j = 0;
        while (j < n2 && s1[i + j] == s2[j]) {
            j++;
        }
        if (j == n2) {
            return i;  // Ako su svi karakteri podstringa jednaki, vraća poziciju početka podstringa
        }
    }
    return -1;  // Ako podstring nije pronađen
}
int main() {
    char s[MAX], p[MAX];
    char c;
    int pozicija;

    // Unos prvog stringa
    printf("Unesite prvi string: ");
    fgets(s, MAX, stdin);
    s[strcspn(s, "\n")] = '\0';  // Uklanjanje novog reda na kraju stringa

    // Unos drugog stringa
    printf("Unesite drugi string: ");
    fgets(p, MAX, stdin);
    p[strcspn(p, "\n")] = '\0';  // Uklanjanje novog reda

    // Unos karaktera za traženje u prvom stringu
    printf("Unesite karakter koji želite da tražite: ");
    c = getchar();

    // Testiranje funkcije pronadji_prvu_poziciju
    pozicija = pronadji_prvu_poziciju(s, c);
    if (pozicija != -1) {
        printf("Prva pozicija karaktera '%c' u stringu je: %d\n", c, pozicija);
    } else {
        printf("Karakter '%c' nije pronađen u stringu.\n", c);
    }

    // Testiranje funkcije pronadji_poslednju_poziciju
    pozicija = pronadji_poslednju_poziciju(s, c);
    if (pozicija != -1) {
        printf("Poslednja pozicija karaktera '%c' u stringu je: %d\n", c, pozicija);
    } else {
        printf("Karakter '%c' nije pronađen u stringu.\n", c);
    }

    // Testiranje funkcije pronadji_podstring
    pozicija = pronadji_podstring(s, p);
    if (pozicija != -1) {
        printf("Podstring '%s' je pronađen u stringu '%s' na poziciji: %d\n", p, s, pozicija);
    } else {
        printf("Podstring '%s' nije pronađen u stringu '%s'.\n", p, s);
    }

    // Testiranje funkcija kopiranja i nadovezivanja
    kopiranje(s, p);
    nadovezivanje(s, p);

    // Testiranje poređenja stringova
    poredjenje(s, p);

    return 0;
}
