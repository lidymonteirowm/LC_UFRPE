#include <stdio.h>
int main()
{
    int num1, num2, maior, menor;
	printf("Digite o 1o numero: ");
	scanf("%d", &num1);
	printf("Digite o 2o numero: ");
	scanf("%d", &num2);
	if (num1 > num2){
		maior = num1;menor = num2;
	}
	else {
		maior = num2;menor = num1;
	}
	printf("%d maior que %d\n", num1, num2);
	printf("Diferença entre eles: %d\n", maior - menor);
	return 0;
}