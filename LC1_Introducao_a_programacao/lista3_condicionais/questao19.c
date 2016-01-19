#include <stdio.h>
int main()
{
	int num, div_tres, div_cinco;
	printf("Digite o 1o numero inteiro:");
	scanf("%d", &num);
	if (num%3==0 && num%5==0 ){
		printf("Numero divisivel por 3 e por 5!");
	}
	else {
		if (num%3 == 0) {
			printf("Numero divisivel por 3!");
		} else if (num%5==0) {
			printf("Numero divisivel por 5!");
		}
		else {
			printf("Numero indivisivel por 3 ou por 5!");
		}
	}
	return 0;
}
	