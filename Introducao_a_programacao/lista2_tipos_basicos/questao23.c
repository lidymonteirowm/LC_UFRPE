#include<stdio.h>
int main () {
    float m;
    printf("Metro: ");
    scanf("%f", &m);
    printf("Jarda: %.2f", m/0.91);
    return 0;
}
