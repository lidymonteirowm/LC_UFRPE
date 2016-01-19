#include <stdio.h>

int main (){
	float altura_degrau, altura;
	printf("Altura do degrau da escadas(cm): \n");
	scanf("%f", &altura_degrau);
	printf("Altura que deseja alcançar(m): \n");
	scanf("%f", &altura);
	printf("Suba %.0f Degraus para alcançar %.2f metros!", altura*100/altura_degrau, altura);
    return 0;
}
