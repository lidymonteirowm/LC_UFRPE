#include <stdio.h>
#include <math.h>
int main()
{
	char operacao;
	/* Ao inves de ler os numeros como int (conforme pede no enunciado), preferi ler os numeros como float 
	 pq lendo como int estava dando problema no calculo de media harmônica, mesmo fazendo casting. */
	float num1, num2, num3;
	printf("Escolha a média que deseja calcular: \n a - Geométrica \n b - Ponderada \n c - Harmônica \n d - Aritmética \n Operação:_");
	scanf("%c", &operacao);
	printf("Digite o 1o numero inteiro positivo: ");
	scanf("%f", &num1);
	printf("Digite o 2o numero inteiro positivo: ");
	scanf("%f", &num2);
	printf("Digite o 3o numero inteiro positivo: ");
	scanf("%f", &num3);
	switch (operacao) {
		case 'a':
			printf("Média geométrica: %.2f\n", pow(num1*num2*num3, 1.0/3.0));
			break;
		case 'b':
			printf(" Média Ponderada: %.2f", (num1+2*num2+3*num3)/6.0);
			break;
		case 'c':
			printf("Média harmônica: %.2f\n", 1.0/((1.0/num1)+(1.0/num2)+(1.0/num3)));
			break;
		case 'd':
			printf(" Média Aritmética: %.2f", (num1+num2+num3)/3.0);
			break;
		default:
			printf("Operação inválida!");
	}
	return 0;
}