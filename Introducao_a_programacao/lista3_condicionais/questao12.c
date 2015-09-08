#include <stdio.h>
#include <math.h>
int main()
{
	int num;
	printf("Digite um numero: ");
	scanf("%d", &num);
	if (num>0){
		num = log10(num);
		printf("Logaritmo: %d", num);		
	}
	else {
		printf("Numero invalido!\n");
	}
	return 0;
}