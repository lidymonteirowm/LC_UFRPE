#include <stdio.h>
int main()
{
	float nota;
	int falta;
	char conceito;
	printf("Digite a Nota do aluno: ");
	scanf("%f", &nota);
	printf("Digite a quantidade de falta(s) do aluno: ");
	scanf("%d", &falta);
	if (nota <= 3.9) {
		if (falta <= 20) {
            conceito = 'D';
		}
		else  {
            conceito = 'E';
		}
	} 
	else if (nota <= 4.9) {
		if (falta <= 20) {
            conceito = 'D';
		}
		else {
            conceito = 'E';
		}
	} 
	else if (nota <= 7.4){
		if (falta <= 20) {
            conceito = 'C';
		}
		else  {
            conceito = 'D';
		}
	} 
	else if (nota <= 8.9){
		if (falta <= 20) {
            conceito = 'B';
		}
		else {
            conceito = 'C';
		}
	} 
	else {
		if (falta <= 20) {
            conceito = 'A';
		}
		else {
            conceito = 'B';
		}
	}
	printf("Conceito: %c", conceito);
	return 0;
}
