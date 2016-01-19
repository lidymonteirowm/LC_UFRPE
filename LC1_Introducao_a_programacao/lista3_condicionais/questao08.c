#include <stdio.h>
int main()
{
    float nota1, nota2;
	printf("Digite a 1a nota: ");
	scanf("%f", &nota1);
	printf("Digite a 2a nota: ");
	scanf("%f", &nota2);
	
	/* O enunciado da questao pede valor *entre* 0.0 e 10.0, assim
	 0.0 e 10.0 nao seriam notas validas. Portanto, validei para que 
	 apenas valores maiores que 0.0 e menores que 10.0 fossem aceitos */
	if (nota1<=0.0 || nota1>=10.0){
		printf("Nota %.2f inválida. Programa encerrado!", nota1);
	}
	else if (nota2<=0.0 || nota2>=10.0){
			printf("Nota %.2f inválida. Programa encerrado!", nota2);
	} 
	else {
		printf("Média = %.2f", (nota1+nota2)/2);
	}
	return 0;

}