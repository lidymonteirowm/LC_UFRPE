#include <stdio.h>
int main()
{
    float h;
    printf("Area em hectares: ");
    scanf("%f", &h);
    printf("Area em Metros Quadrados: %.2f", h*10000);
    return 0;
}
