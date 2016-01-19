#include <stdio.h>
#define AUM 0.25

int main()
{
    float sal, novo_sal;
    printf("salario: ");
    scanf("%f", &sal);
    printf("Novo salario: %.2f", sal + sal*AUM );
    return 0;
}
