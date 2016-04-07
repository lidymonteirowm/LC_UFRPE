#include <stdio.h>
int main(){
	int idade, soma=0;
	float media, qtd=0.0;
	do {
		scanf("%d", &idade);
		soma += idade;
		if (idade>0){
			qtd++;
		}
	}while(idade>0);
	media = soma/qtd;
	printf("Somatorio: %d\n", soma);
	printf("Media: %.2f\n", media);
	return 0;
}
