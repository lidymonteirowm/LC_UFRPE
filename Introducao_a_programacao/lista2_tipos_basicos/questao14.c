#include<stdio.h>
#define PI 3.14
int main () {
    float ang_graus;
    printf("Angulo em Grau: ");
    scanf("%f", &ang_graus);
    printf("Radiano: %.2f", ang_graus*PI/180);
    return 0;
}
