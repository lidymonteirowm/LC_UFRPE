#include <stdio.h>
#define PI 3.141592
int main()
{
    float raio, altura;
    printf("--- Cilindro ---\n");
    printf("Altura: ");
    scanf("%f", &altura);
    printf("Raio: ");
    scanf("%f", &raio);
    printf("Volume: %.2f\n", PI*raio*raio*altura);
    return 0;
}
