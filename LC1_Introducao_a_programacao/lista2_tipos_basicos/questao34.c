#include <stdio.h>
#define PI 3.141592
int main()
{
    float raio;
    printf("Raio do circulo: ");
    scanf("%f", &raio);
    printf("Area: %f\n", PI*raio*raio);
    return 0;
}
