#include <stdio.h>
int main () {
	float premio, valor1, valor2, valor3, proporcao;
	printf("Digite o valor do premio: ");
	scanf("%f", &premio);
	printf("Digite o valor do apostador 1: ");
	scanf("%f", &valor1);
	printf("Digite o valor do apostador 2: ");
	scanf("%f", &valor2);
	printf("Digite o valor do apostador 3: ");
	scanf("%f", &valor3);
	proporcao = premio/(valor1+valor2+valor3);
	printf("O apostador 1 ganhou: R$ %.2f\n", valor1*proporcao);
	printf("O apostador 2 ganhou: R$ %.2f\n", valor2*proporcao);
	printf("O apostador 3 ganhou: R$ %.2f\n", valor3*proporcao);
    return 0;
}
