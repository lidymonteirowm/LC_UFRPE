#include <stdio.h>
int main () {
	int num, milhar, centena, dezena, unidade;
	printf("Digite um numero inteiro (de 1000 a 9999): ");
	scanf("%d", &num);
	milhar = num/1000;
	centena = (num%1000)/100;
	dezena = (num%100)/10;
	unidade = ((num%100)%10);
	printf("%d \n", milhar);
	printf("%d \n", centena);
	printf("%d \n", dezena);
	printf("%d \n", unidade);
    return 0;
	
}
