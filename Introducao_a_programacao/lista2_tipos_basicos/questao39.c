#include <stdio.h>
#define VALOR 780000.0

int main()
{
    printf("Ganhador 1: %.2f\n", VALOR*0.46);
    printf("Ganhador 2: %.2f\n", VALOR*0.32);
    printf("Ganhador 3: %.2f\n", VALOR - VALOR*0.46 - VALOR*0.32);
    return 0;
}
