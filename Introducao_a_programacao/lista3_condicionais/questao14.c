#include <stdio.h>
int main()
{
	float nota1, nota2, nota3, media;
	printf("Nota do Trabalho de laboratorio: ");
	scanf("%f", &nota1);
	printf("Nota da Avalição semestral: ");
	scanf("%f", &nota2);
	printf("Nota do Exame Final: ");
	scanf("%f", &nota3);
	media = (nota1*2 + nota2*3 + nota3*5)/(2+3+5);
	
	if (nota1<0.0 || nota1>10.0)
	{
		printf("Nota %.2f inválida. Programa encerrado!", nota1);
	}
	else if (nota2<0.0 || nota2>10.0)
	{
		printf("Nota %.2f inválida. Programa encerrado!", nota2);
	}
	else if (nota3<0.0 || nota3>10.0)
	{
		printf("Nota %.2f inválida. Programa encerrado!", nota2);
	}
	else {
		if (media<=2.9)
		{
			printf("Aluno reprovado! Media: %.2f", media);		
		}
		else if (media>=3.0 && media<=4.9)
		{
			printf("Aluno de recuperação! Media %.2f", media);
		}
		else {
			printf("Aluno Aprovado! Media %.2f", media);
		}
	}
	return 0;
}