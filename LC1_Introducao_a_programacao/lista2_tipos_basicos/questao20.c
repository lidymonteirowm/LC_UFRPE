#include<stdio.h>
int main () {
    float kg;
    printf("Kg: ");
    scanf("%f", &kg);
    printf("Libra: %.2f", kg/0.45);
    return 0;
}
