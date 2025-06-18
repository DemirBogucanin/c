#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX 200


int proveri_recenicu(char s[]) {
    int n = strlen(s);
    if (!isupper(s[0])) {
        return 0; 
    }

    if (s[n - 1] != '.') {
        return 0;  
    }

    for (int i = 1; i < n - 1; i++) { 
        if (isalpha(s[i]) && !islower(s[i])) {
            return 0;  
        }
        if (s[i] == ' ' || s[i] == ',' || s[i] == ';') {
            continue;  
        }
        if (!isalpha(s[i]) && s[i] != ' ' && s[i] != ',' && s[i] != ';') {
            return 0; 
        }
    }

    return 1; 
}

int main() {
    char s[MAX];
    printf("Unesite recenicu: ");
    fgets(s, MAX, stdin);

    s[strcspn(s, "\n")] = '\0';

    if (proveri_recenicu(s)) {
        printf("Recenica je ispravno uneta.\n");
    } else {
        printf("Recenica nije ispravno uneta.\n");
    }

    return 0;
}
