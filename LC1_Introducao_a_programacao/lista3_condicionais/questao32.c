#include <stdio.h>
int main() {
	int codigo, qtd;
	printf("Digite o código do produto: ");
	scanf("%d",&codigo);
	printf("Digite a quantidade: ");
	scanf("%d", &qtd);
	switch (codigo) {
		case 100:
			printf("Pedido: %d Cachorro quente\n", qtd);
			printf("Total: R$ %.2f", 1.20*qtd);
			break;
		case 101:
			printf("Pedido: %d Bauru Simples\n", qtd);
			printf("Total: R$ %.2f", 1.30*qtd);
			break;
		case 102:
			printf("Pedido: %d Bauru com ovo\n", qtd);
			printf("Total: R$ %.2f", 1.50*qtd);
			break;
		case 103:
			printf("Pedido: %d Hamburguer\n", qtd);
			printf("Total: R$ %.2f", 1.20*qtd);
			break;
		case 104:
			printf("Pedido: %d Cheeseburguer\n", qtd);
			printf("Total: R$ %.2f\n", 1.70*qtd);
			break;
		case 105:
			printf("Pedido: %d Suco(s)\n", qtd);
			printf("Total: R$ %.2f\n", 2.20*qtd);
			break;
		case 106:
			printf("Pedido: %d Refrigerante(s)\n", qtd);
			printf("Total: R$ %.2f\n", 1.00*qtd);
			break;
		default:
			printf("Código de produto inválido!");
			break;
	}
	return 0;
}