#include <stdio.h>
#define GASOLINA 4.00
int main(){
	int tempo;
	float vm, custo,d;
	scanf("%d", &tempo);
	scanf("%f", &vm);
	d = vm*tempo;
	custo = (d/10) * GASOLINA;
	printf("Custo: %.2f\n", custo);
	return 0;
}
