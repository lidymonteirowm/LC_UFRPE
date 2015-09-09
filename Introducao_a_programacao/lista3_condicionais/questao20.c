#include <stdio.h>
int main()
{
	int a, b, c;
	printf("Digite o 1o lado: ");
	scanf("%d", &a);
	printf("Digite o 2o lado: ");
	scanf("%d", &b);
	printf("Digite o 3o lado: ");
	scanf("%d", &c);
	if ((a<b+c) && (b<a+c) && (c<b+a)) {
		if ((a==b) && (b==c)){ 
			printf("Os lados formam um Triângulo Equilátero!");
		}
		else if ((a==b) || (a==c) || (c==b)) {
			printf("Os lados formam um Triângulo Isósceles!");
		}
		else if ((a!=b) && (b!=c) && (c!=a)){
			printf("Os lados foram um Triangulo Escaleno!");
		}
	}
	else {
		printf("Lados nao formam um Triângulo!");
	}
	return 0;
}