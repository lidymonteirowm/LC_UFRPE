#include<stdio.h>
int main () {
    float l;
    printf("Litro: ");
    scanf("%f", &l);
    printf("Metro C�bico: %.2f", l/1000);
    return 0;
}
