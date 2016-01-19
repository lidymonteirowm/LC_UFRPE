#include <stdio.h>
int main () {
	int idade, ano_atual;
	printf("Digite o ano atual: ");
	scanf("%d",&ano_atual);
	printf("Digite a idade: ");
	scanf("%d", &idade);
	printf("Ano de nascimento: %d", ano_atual - idade);
    return 0;
}
