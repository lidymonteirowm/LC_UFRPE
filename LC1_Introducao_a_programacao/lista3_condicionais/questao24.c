#include <stdio.h>
int main()
{
	float valor;
	int estado;
	printf("Digite o valor do produto:");
	scanf("%f", &valor);
	printf("Digite o estado: \n 1 - Minas Gerais \n 2 - São Paulo \n 3 - Rio de Janeiro \n 4 - Mato Grosso \n Estado: ");
	scanf("%d", &estado);
	switch (estado) {
		case 1:
			printf("Preço final: R$ %.2f", valor + valor*0.07);
			break;
		case 2:
			printf("Preço final: R$ %.2f", valor + valor*0.12);
			break;
		case 3:
			printf("Preço final: R$ %.2f", valor + valor*0.15);
			break;
		case 4:
			printf("Preço final: R$ %.2f", valor + valor*0.08);
			break;
		default:
			printf("Estado inválido!");
	}
	return 0;
}