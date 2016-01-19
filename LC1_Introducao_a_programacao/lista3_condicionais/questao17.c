#include <stdio.h>
int main()
{
	float B, b, altura, area;
	printf("-------- TRAPÉZIO --------\n");
	printf("Digite a base maior: ");
	scanf("%f", &B);
	printf("Digite a base menor: ");
	scanf("%f", &b);
	printf("Digite a altura: ");
	scanf("%f", &altura);
	if (B<=0.0 || b<=0.0 || altura<=0.0) { 
		printf("Valor menor ou igual a zero é invalido. Programa encerrado!");
	}
	else {
		area = ((B+b)*altura)/2.0;
		printf("Area do Trapézio: %.2f", area);
	}
	return 0;
}
