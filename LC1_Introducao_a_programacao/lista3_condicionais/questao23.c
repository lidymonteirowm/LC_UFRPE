#include <stdio.h>
int main()
{
	int ano;
	printf("Digite um ano: ");
	scanf("%d", &ano);
	if (ano%400==0) {
		printf("Ano %d é bissexto!", ano);
	} 
	else if (ano%4==0 && ano%100!=0){
		printf("Ano %d é bissexto!", ano);
	}
	else {
		printf("Ano %d não é bissexto!", ano);
	}
	return 0;
}