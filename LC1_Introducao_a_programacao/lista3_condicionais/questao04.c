#include <stdio.h>
#include <math.h>
int main()
{
    float num;
	printf("Digite um numero: ");
	scanf("%f", &num);
	if (num>0){
		printf("Raiz quadrada = %.2f\n", sqrt(num));
		printf("Quadrado = %.2f", pow(num,2));
	}
	else {
		printf("Numero negativo. Programa encerrado!");
	}
	return 0;
}
