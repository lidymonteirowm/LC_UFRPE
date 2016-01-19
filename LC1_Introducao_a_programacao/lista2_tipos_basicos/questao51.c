#include <stdio.h>
#include <math.h>
int main()
{
    float x, y;
    printf("Coordenada X: ");
    scanf("%f", &x);
    printf("Coordenada Y: ");
    scanf("%f", &y);
    printf("Distancia da origem: %.2f", sqrt(x*x + y*y));
    return 0;
}
