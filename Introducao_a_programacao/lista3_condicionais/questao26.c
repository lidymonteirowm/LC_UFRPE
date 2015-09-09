#include <stdio.h>
int main()
{
    float km, litro, consumo;   
	printf("Digite a distancia em km: ");
	scanf("%f", &km);
	printf("Digite o consumo de gasolina em litros: ");
	scanf("%f", &litro);
	consumo = km/litro;
	if(consumo<8)
	{
		printf("Venda o carro! %.2f", consumo);
	}
	else if(consumo>=8 && consumo<=12){
		printf("Econômico! %.2f", consumo);
	}
	else {
		printf("Super Econômico! %.2f", consumo);
	}
	return 0;
}