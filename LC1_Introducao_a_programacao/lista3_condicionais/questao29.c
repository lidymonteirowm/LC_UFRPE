#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i = 0, num1, num2, resultado, resposta, acerto = 0;
	while (i <= 4) {
		num1 = rand() % 100;
		num2 = rand() % 100;
        resposta = 0;
		resultado = num1 + num2;
		printf("Qual eh resultado da soma de %d + %d = ", num1, num2);
		scanf("%d", &resposta);
		if (resultado == resposta) {
			acerto += 1;
		}
		i++;
	}
	printf("Total de acerto(s): %d", acerto);
	return 0;
}
