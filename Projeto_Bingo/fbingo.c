#include <stdio.h>
#include <stdlib.h>

void exibe_sorteados(int num_sorteado[], int qtd_cart){
	int i, j, aux;
	for (i=0; i<(qtd_cart-1); i++) {
		for (j=0; j<(qtd_cart-i-1); j++){
			if (num_sorteado[j] > num_sorteado[j+1]){
				aux = num_sorteado[j];
				num_sorteado[j] = num_sorteado[j+1];
				num_sorteado[j+1] = aux;
			}
		}
	}
	printf("\n");
	for(i=0; i<qtd_cart; i++){
		printf("%d ", num_sorteado[i]);
	}
}

