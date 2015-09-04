#include <stdio.h>
#define DIARIA 30.00
#define DESC 0.08

int main (){
	int dias;
	printf("Dias trabalhados: ");
	scanf("%d", &dias);
	printf("Liquido a receber: R$ %.2f", (dias*DIARIA) - (dias*DIARIA*DESC));
    return 0;
}
