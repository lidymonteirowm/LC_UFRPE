#include <stdio.h>
int main()
{
	int dia, mes, ano;
	printf("Digita o Dia: ");
	scanf("%d", &dia);
	printf("Digite o mês: ");
	scanf("%d", &mes);
	printf("Digite o ano: ");
	scanf("%d", &ano);
	if (ano >= 2008) {
		if (mes < 1 && mes > 12 ) {
			printf("Mês inválido/Data Inválida!");
			return 0;
		} else {
			if( ano%4 == 0 || ano%400 == 0 && ano%100 != 0) {
				if (mes == 2 && dia > 29) {
					printf("Dia inválido/Data inválida!");
				} else {
					printf("Data Inválida!");
				}
			} else {
				if (mes == 2 && dia > 28) {
					printf("Dia inválido/Data inválida!");
				} else {
					printf("Data Inválida!");
				}
			}
		}
	} else {
		printf("Data Inválida!");
	}
	return 0;
}
