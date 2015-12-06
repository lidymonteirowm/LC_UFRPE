#include <stdio.h>
#include <stdlib.h>
#include "fbingo.h"

typedef struct {
	int id[20];
	int num[20][20];
} cartela;


/*typedef struct{
	int qtd_cart;
	int num_sorteado[90];
} jogo; */

int main (){

	cartela cart;
	//jogo evento;
	FILE *fp_cart;
	int num_sorteado[90], qtd_cart;
	
	// variaveis auxiliares e contadores
	int i=0, j=0, qtd=0, aux=5;

	fp_cart = fopen("cartela.txt", "r");
	if (fp_cart == NULL){
		printf("Arquivo de cartela não pode ser aberto ou nao foi encontrado!\n");
	}

	fscanf(fp_cart, "%d", &qtd_cart);
	printf("%d\n", qtd_cart);
	for (i=0; i< qtd_cart; i++){
		fscanf(fp_cart, "%d", &cart.id[i]);
		printf("%2d ", cart.id[i]);

		for (j=0; j<18; j++){
			fscanf(fp_cart, "%d", &cart.num[i][j]);
			printf("%2d ", cart.num[i][j]);
		}
		printf("\n");
	}
	printf("Numeros sorteados: \n");
	for(i=0; i<aux; i++){
		scanf("%d", &num_sorteado[i]);
		qtd++;
	}
	exibe_sorteados(num_sorteado, qtd);
	printf("\n");


	return 0;
}
