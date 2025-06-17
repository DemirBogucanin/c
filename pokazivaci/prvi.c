#include <stdio.h>
#define PI 3.141592

void obim(float r, float *o, float *p)
{
    *o=2*r*PI;
    *p=r*r*PI;
}
int main()
{
    float r,po,pp;
    printf("Unesite r: ");
    scanf("%f",&r);
    obim(r,&po,&pp);
    printf("Obim je %.2f\n povrsina je %.2f",po,pp);
}

