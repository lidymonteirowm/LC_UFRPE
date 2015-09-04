#include <stdio.h>
#define P_DESC 0.10
#define P_COM 0.05

int main (){
	float valor;
	printf("Valor(R$): ");
	scanf("%f", &valor);
	printf("Total a pagar com desconto de 10%%: R$ %.2f\n", valor - valor*P_DESC);
	printf("Parcelamento 3x s/juros: \n 1o Parcela: R$ %.2f \n 2o Parcela: R$ %.2f \n 3o Parcela: R$ %.2f \n", valor/3, valor/3, valor/3);
	printf("Comissão do(a) Vendedor(a) - venda a vista: R$ %.2f\n", (valor - valor*P_DESC)*P_COM);
	printf("Comissão do(a) Vendedor(a) - venda parcelada: R$ %.2f\n", valor*P_COM);
    return 0;
}