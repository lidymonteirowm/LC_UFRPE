#include <stdio.h>
int main() {
	float preco_antigo, preco_novo;
	printf("Digite o preço antigo do produto: ");
	scanf("%f", &preco_antigo);
	if (preco_antigo<=50.00) {
		preco_novo = preco_antigo + preco_antigo*0.05;
	}
	else if (preco_antigo>50.00 && preco_antigo<100.00){
		preco_novo = preco_antigo + preco_antigo*0.10;
	}
	else {
		preco_novo = preco_antigo + preco_antigo*0.15;
	}

	if (preco_novo<=80.00) {
		printf("Barato!");
	}
	else if (preco_novo>80.00 && preco_novo<=120.00) {
		printf("Normal!");
	}
	else if (preco_novo>120.00 && preco_novo<=200.00) {
		printf("Caro!");
		
	}
	else {
		printf("Muito caro!");
	}
	return 0;
}