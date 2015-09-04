#include <stdio.h>
int main () {
	int num, centena, dezena, unidade;
	printf("Digite um numero inteiro (de 100 a 999): ");
	scanf("%d", &num);
	centena = num/100;
	dezena = (num%100)/10;
	unidade = ((num%100)%10);
	printf("%d%d%d \n", unidade, dezena, centena);
    return 0;
	
}