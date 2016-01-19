#include <stdio.h>
int main()
{
    int num;
	printf("Digite um numero: ");
	scanf("%d", &num);
	if (num%2 == 0){
		printf("%d é um numero par!\n", num);
	}
	else {
		printf("%d é um numero ímpar!", num);
	}
	return 0;
}
