#include <stdio.h>
int main()
{
	int operacao;
	float num1, num2;
	printf("Digite um operação Matemática \n 1- Soma \n 2- Subtração \n 3- Divisão \n 4- Multiplicação \n Operação:_");
	scanf("%d", &operacao);
	printf("Digite o 1o numero: ");
	scanf("%f", &num1);
	printf("Digite o 2o numero: ");
	scanf("%f", &num2);
	switch (operacao) {
		case 1:
			printf(" + : %.2f", num1+num2);
			break;
		case 2:
			printf(" - : %.2f", num1-num2);
			break;
		case 3:
			if (num2 != 0){
				printf(" / : %.2f", num1/num2);
			}
			else {
				printf("Divisao por zero não existe!");
			}
			break;
		case 4:
			printf(" * : %.2f", num1*num2);
			break;
		default:
			printf("Operação inválida!");
	}
	return 0;
}