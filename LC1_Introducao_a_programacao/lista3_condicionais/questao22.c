#include <stdio.h>
int main()
{
	int idade, ts;
	printf("Digite a idade do trabalhador: ");
	scanf("%d", &idade);
	printf("Digite o tempo de servi�o do trabalhador: ");
	scanf("%d", &ts);
	if (idade >= 65) {
        printf("Resultado: Pode se Aposentar!");
	}
	else if (ts >= 30) {
        printf("Resultado: Pode se Aposentar!");
	}
	else if (idade == 60 && ts == 25){
        printf("Resultado: Pode se Aposentar!");
	}
	else {
        printf("Resultado: N�o pode se Aposentar!");
	}
	return 0;
}
