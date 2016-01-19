#include <stdio.h>
int main()
{
    char sexo;
    float h;
    printf("Digite o sexo - (F) Feminino / (M) Masculino: ");
    sexo = getchar();
    printf("Digite a altura: ");
    scanf("%f", &h);
    switch (sexo) {
		case 'F':
			printf("Peso ideal: %.2f \n", (62.1 * h) - 44.7);
			break;
		case 'M':
			printf("Peso ideal: %.2f \n", (72.7 * h) - 58);
			break;
		default:
			printf("Sexo inválido! \n");
			break;
	} 
	return 0;
}