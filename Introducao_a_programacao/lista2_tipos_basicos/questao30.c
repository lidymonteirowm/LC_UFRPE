#include <stdio.h>
int main()
{
    float real, cot_dolar;
    printf("Valor em Real: ");
    scanf("%f", &real);
    printf("Cotacao do dolar: ");
    scanf("%f", &cot_dolar);
    printf("valor em dolar: %f", real*cot_dolar);
    return 0;
}
