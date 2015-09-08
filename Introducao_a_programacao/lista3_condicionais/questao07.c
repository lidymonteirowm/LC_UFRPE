#include <stdio.h>
int main()
{
    float num1, num2, maior, menor;
	printf("Digite o 1o numero: ");
	scanf("%f", &num1);
	printf("Digite o 2o numero: ");
	scanf("%f", &num2);
	if (num1 == num2){
		printf("Números iguais!");
	}
	else {
		if (num1 > num2){
			maior = num1;menor = num2;
			printf("%.2f maior que %.2f\n", num1, num2);
		}
		else {
			maior = num2;menor = num1;
			printf("%.2f maior que %.2f\n", num1, num2);
		}
	}
	return 0;
}