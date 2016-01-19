#include<stdio.h>
int main () {
    float p;
    printf("Polegada: ");
    scanf("%f", &p);
    printf("Centrímetro: %.2f", p*2.54);
    return 0;
}
