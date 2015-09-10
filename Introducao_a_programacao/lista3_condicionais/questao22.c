#include <stdio.h>
int main()
{
	int idade, ts;
	printf("Digite a idade do trabalhador: ");
	scanf("%d", &idade);
	printf("Digite o tempo de serviço do trabalhador: ");
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
        printf("Resultado: Não pode se Aposentar!");
	}
	return 0;
}
