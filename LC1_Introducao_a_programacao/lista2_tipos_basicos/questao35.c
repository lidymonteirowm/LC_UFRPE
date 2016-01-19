#include <stdio.h>
#include <math.h>
int main()
{
    float a, b;
    printf("Cateto a: ");
    scanf("%f", &a);
    printf("Cateto b: ");
    scanf("%f", &b);
    printf("Hipotenusa: %.2f", sqrt(a*a + b*b));
    return 0;
}
