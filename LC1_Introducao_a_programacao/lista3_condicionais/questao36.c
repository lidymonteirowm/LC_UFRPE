#include <stdio.h>
int main()
{
	float venda, premio, percentual, comissao;
	printf("Total de Venda: R$ ");
	scanf("%f", &venda);
	if (venda > 100000) {
		percentual = 0.16;
		premio = 700;
	} 
	else {
		percentual = 0.14;
		if (venda < 20000) {
			premio = 400;
		}
		if (venda >= 20000 && venda < 40000) {
			premio = 500;
		}
		if (venda >= 40000 && venda < 60000) {
			premio = 550;
		}
		if (venda >= 60000 && venda < 80000) {
			premio = 600;
		}
		if (venda >= 80000 && venda < 100000) {
			premio = 650;
		}
	}
	printf("Prêmio: R$ %.2f\n", premio);
	printf("Percentual: %.2f\n", percentual);
	printf("Comissão: R$ %.2f\n\n", premio + venda * percentual);
	return 0;
}
