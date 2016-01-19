#include<stdio.h>
int main () {
    float l;
    printf("Litro: ");
    scanf("%f", &l);
    printf("Metro Cúbico: %.2f", l/1000);
    return 0;
}
