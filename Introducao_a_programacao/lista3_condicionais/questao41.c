#include <stdio.h>
int main() {
	float peso, altura, imc;
	printf("---- Cálculo e Classificação IMC ----\n");
	printf("Digite o peso em kg: ");
	scanf("%f", &peso);
	printf("Digite a altura em metros: ");
	scanf("%f", &altura);
	imc = peso / (altura * altura);
	if (imc < 18.5) {
		printf("Abaixo do peso!");
	}
	else if (imc>=18.6 && imc<=24.9) {
		printf("Saudável!");
	}
	else if (imc>=25.0 && imc<29.9) {
		printf("Peso em excesso!");
	}
	else if (imc>=30.0 && imc<34.9) {
		printf("Obesidade grau I!");
	}
	else if (imc>=35.0 && imc<39.9) {
		printf("Obesidade grau II(severa)!");
	}
	else {
		printf("Obesidade grau III(mórbida)!");
	}
	return 0;
}