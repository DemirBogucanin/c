/*Дата је матрица целих бројева димензије nXm. Написати потпрограм која рачуна унију
елемената два задата реда матрице и елементе уније смешта у нови низ. Унију елемената чине
сви елементи који се налазе у ова два задата реда, при чему није дозвољено понављање
елемената.*/

#include <stdio.h>

void kolone(int mat[5][5], int kol1, int kol2, int niz[100], int *n)
{
    *n = 0;
    int brojac = 0;
    for (int i = 0; i < 5; i++)  
    {
        
        niz[brojac] = mat[i][kol1];
        brojac++;
        niz[brojac] = mat[i][kol2];
        brojac++;
    }
    *n = brojac;  
}

int main()
{
    int mat[5][5], niz[100], n = 5, kol1, kol2;
    printf("Unesite elemente matrice 5x5:\n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }
    printf("Unesite kolonu 1: ");
    scanf("%d", &kol1);
    printf("Unesite kolonu 2: ");
    scanf("%d", &kol2);
    kolone(mat, kol1, kol2, niz, &n);
    printf("Niz sa vrednostima iz dve kolone:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", niz[i]);
    }

    return 0;
}
