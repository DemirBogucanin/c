#include <stdio.h>

int main() {
    int matrica[3][3], simetricna = 1;


    printf("Unesite elemente matrice 3x3:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrica[i][j]);
        }
    }


    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < i; j++) { 
            if (matrica[i][j] != matrica[j][i]) {
                simetricna = 0;
                break;
            }
        }
        
    }


    if (simetricna)
        printf("Matrica je simetricna.\n");
    else
        printf("Matrica nije simetricna.\n");

    return 0;
}
