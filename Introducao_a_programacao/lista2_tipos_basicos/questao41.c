#include <stdio.h>
#define AUM 0.10

int main (){
	int h;
	float valor_h;
	printf("Horas trabalhadas: ");
	scanf("%d", &h);
	printf("Valor da hora(R$): ");
	scanf("%f", &valor_h);
	printf("A receber: R$ %.2f", (h*valor_h) - (h*valor_h*AUM));
    return 0;
}