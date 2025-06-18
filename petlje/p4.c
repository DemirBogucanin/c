//spisati sve savršene brojeve do 1000
// Savršen broj je onaj koji je jednak 
//sumi svojih delitelja isključujući njega

#include <stdio.h>
int main() {
    int broj, i, suma;

    printf("Savrseni brojevi do 1000 su:\n");

    
    for (broj = 1; broj <= 1000; broj++) {
        suma = 0;

        
        for (i = 1; i < broj; i++) {
            if (broj % i == 0) {
                suma += i; 
            }
        }

        
        if (suma == broj) {
            printf("%d\n", broj);
        }
    }

    return 0;
}
