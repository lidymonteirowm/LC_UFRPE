#include <stdio.h>
int main(){
	int nota[8], soma = 0, i;
	for(i=0; i<8; i++){
		scanf("%d", &nota[i]);
		soma += nota[i];
	}
	printf("Soma das Notas: %d\n", soma);
	return 0;
}