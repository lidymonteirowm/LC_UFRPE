#include <stdio.h>
#include <math.h>
int main()
{
    float ca, cb, cc, delta, raiz_delta, x1, x2;   
	printf("Calcula equação do 2o grau: ax² + bx + c = 0\n");
	printf("Digite o valor de a: ");
	scanf("%f", &ca);
	printf("Digite o valor de b: ");
	scanf("%f", &cb);
	printf("Digite o valor de c: ");
	scanf("%f", &cc);
	if(ca != 0)
	{
		delta = (cb*cb) - (4*ca*cc);
		raiz_delta = sqrt(delta);
		if(delta > 0)
		{
			x1 = (-cb + raiz_delta)/(2*ca);
			x2 = (-cb - raiz_delta)/(2*ca);
			printf("Raízes da equação: \n x1 = %.2f \n x2 = %.2f", x1, x2);
		}
		else if (delta==0) {
			printf("Raiz única! x1 e x2: %.2f", x1);
		}
		else
		{
			printf("Não existe raiz real! Delta menor que zero.");
		}
	}
	else {
		printf("Não é uma equação de 2o grau!");
	}
}