#include<stdio.h>
int main () {
    float p;
    printf("Polegada: ");
    scanf("%f", &p);
    printf("Centr�metro: %.2f", p*2.54);
    return 0;
}
