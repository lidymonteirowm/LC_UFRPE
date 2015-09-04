#include<stdio.h>
#define PI 3.14
int main () {
    float ang_rad;
    printf("Angulo em Radiano: ");
    scanf("%f", &ang_rad);
    printf("Angulo em Grau: %.2f", ang_rad*180/PI);
    return 0;
}
