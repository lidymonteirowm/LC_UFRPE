#include <stdio.h>
#define DESC 0.12
int main()
{
    float valor_prod;
    printf("Valor do produto: ");
    scanf("%f", &valor_prod);
    printf("Valor com desconto: %.2f", valor_prod - valor_prod*DESC );
    return 0;
}
