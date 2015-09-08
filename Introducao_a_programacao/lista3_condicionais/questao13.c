#include <stdio.h>
#include <math.h>
int main()
{
	float nota1, nota2, nota3, media;
	printf("Nota da 1a prova: ");
	scanf("%f", &nota1);
	printf("Nota da 2a prova: ");
	scanf("%f", &nota2);
	printf("Nota da 3a prova: ");
	scanf("%f", &nota3);
	media = (nota1*1 + nota2*1 + nota3*2)/1+1+2;
	if (media>=60.0){
		printf("Aprovado! Media %.2f é igual ou superior a 60 pontos!", media);		
	}
	else {
		printf("Reprovado! Media %.2f é menor que 60 pontos!", media);
	}
	return 0;
}	