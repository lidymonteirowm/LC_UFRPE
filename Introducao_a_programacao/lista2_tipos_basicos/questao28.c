#include <stdio.h>
int main()
{
    float num1, num2, num3;
    printf("Numero 1: ");
    scanf("%f", &num1);
    printf("Numero 2: ");
    scanf("%f", &num2);
    printf("Numero 3: ");
    scanf("%f", &num3);
    printf("Soma dos quadrados: %.2f", num1*num1+num2*num2+num3*num3);
    return 0;
}
