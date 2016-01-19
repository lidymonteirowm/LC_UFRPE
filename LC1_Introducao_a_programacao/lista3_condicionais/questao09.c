#include <stdio.h>
int main()
{
    float salario, parcela;
	printf("Digite o salário: ");
	scanf("%f", &salario);
	printf("Digite a parcela de empréstimo: ");
	scanf("%f", &parcela);
	if (parcela>0.2*salario){
		printf("Empréstimo não concedido!");
	}
	else {
		printf("Empréstimo concedido!");
	}
	return 0;
	
}