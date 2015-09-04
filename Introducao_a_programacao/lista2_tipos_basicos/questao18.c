#include<stdio.h>
int main () {
    float m;
    printf("Metro Cúbico: ");
    scanf("%f", &m);
    printf("Litro: %.2f", 1000*m);
    return 0;
}
