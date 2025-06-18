//11.	Ispisati sone trocifrene brojeve koji su jednaki sumi faktorijela svojih cifara.

#include <stdio.h>

int main() {
    int broj, prva, druga, treca;
    int f1, f2, f3;
    for (broj = 100; broj <= 999; broj++) {
        
        prva = broj / 100;             
        druga = (broj / 10) % 10;      
        treca = broj % 10;            
        f1 = 1;
        for (int i = 1; i <= prva; i++) {
            f1 *= i; 
        }
        
        f2 = 1;
        for (int i = 1; i <= druga; i++) {
            f2 *= i;
        }
        
        f3 = 1;
        for (int i = 1; i <= treca; i++) {
            f3 *= i; 
        }
        if (broj == f1 + f2 + f3) {
            printf("%d\n", broj);
        }
    }
    
    return 0;
}
