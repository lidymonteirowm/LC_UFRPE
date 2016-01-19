#include <stdio.h>
#define TAXA 12.00
int main(){
	int ligacoes;
	float valorTotal;
	scanf("%d", &ligacoes);
	if (ligacoes<=0){
		printf("Quantidade de Ligacoes Inválida\n");
	}
	else if (ligacoes<=100){
		valorTotal = TAXA;
	}
	else{
		valorTotal = TAXA + 0.1*(ligacoes - 100);
	}
	printf("Valor Total = %.2f\n", valorTotal);
	return 0;
}