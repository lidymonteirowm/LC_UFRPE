#include <stdio.h>
int main()
{
	int h1, min1, h2, min2, th, tm;
	float valor;
	printf("Digite a hora e minuto da chegada:\n ");
	printf("Hora: ");
	scanf("%d", &h1);
	printf("Minuto: ");
	scanf("%d", &min1);
	printf("Digite a hora e minuto da Sa’da:\n");
	printf("Hora: ");
	scanf("%d", &h2);
	printf("Minuto: ");
	scanf("%d", &min2);
	
	if (h2 > h1) {
		th = h2 - h1;
	}
	if (m2 > m1) {
		tm = min2 - min1;
	}
	if ((th * 60 + tm) % 60 != 0) { 
		th += 1;
	}	
	
	if (th <= 2) {
		valor = th * 1;
	}
	if (th > 2 && th <= 4) {
		valor = th * 1.4;
	}
	if (th > 4) {
		valor = th * 2;
	}
	printf("Custo do estacionamento: R$ %.2f (%d horas)", valor, th);
	return 0;		
}