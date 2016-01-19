
#include <stdio.h>
int main()
{
	int tempoServico;
	float salarioAtual, salarioFinal;
	printf("Digite o Salário do Funcionário: ");
	scanf("%f", &salarioAtual);
	printf("Favor entrar com o Tempo de Servico do Funcionario: ");
	scanf("%d", &tempoServico);
	if (salarioAtual <= 500) {
		salarioFinal = salarioAtual * 1.25;
	} else {
		if (salarioAtual > 500 && salarioAtual <= 1000) {
			salarioFinal = salarioAtual * 1.2;
		} else {
			if (salarioAtual > 1000 && salarioAtual <= 1500) {
				salarioFinal = salarioAtual * 1.15;
			} else {
				if (salarioAtual > 1500 && salarioAtual <= 2000) {
					salarioFinal = salarioAtual * 1.1;
				} else {
					salarioFinal = salarioAtual;
				}
			}
		}
	}
	switch (tempoServico) {
		case 0: 
		case 1: 
			salarioFinal += 0; 
			break;
		case 2: 
		case 3: 
			salarioFinal += 100.0; 
			break;
		case 4: 
		case 5: 
		case 6: 
			salarioFinal += 200.0; 
			break;
		case 7: 
		case 8: 
		case 9: 
		case 10: 
			salarioFinal += 300.0; 
			break;
		default: 
			salarioFinal += 500.0; 
			break;
	}
	printf("O Salário Final: R$ %.2f", salarioFinal);
	return 0;		
}
