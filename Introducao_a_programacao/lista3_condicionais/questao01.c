#include <stdio.h>
int main()
{
    float num1, num2;
	printf("Digite o 1o numero: ");
	scanf("%f", &num1);
	printf("Digite o 2o numero: ");
	scanf("%f", &num2);
	if (num1 > num2){
		printf("%.1f maior que %.1f", num1, num2);		
	}
	else {
		printf("%1.f maior que %1.f", num2, num1);
	}
	return 0;
}