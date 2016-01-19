#include<stdio.h>
int main () {
    float cm;
    printf("Centrímetro: ");
    scanf("%f", &cm);
    printf("Polegada: %.2f", cm/2.54);
    return 0;
}
