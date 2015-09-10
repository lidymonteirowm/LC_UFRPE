#include <stdio.h>
int main() {
    float custo;
    printf("Custo de Fábrica: R$ ");
    scanf("%f", &custo);
    if (custo <= 12000) {
        printf("Distribuidor 5%%: %.2f\n", custo * 0.05);
        printf("Imposto: Isento\n");
        printf("Preço Final ao Consumidor: %.2f\n", custo * 1.05);
    } else {
        if (custo > 12000 && custo <= 25000) {
        	printf("Distribuidor 10%%: %.2f\n", custo * 0.1);
        	printf("Imposto 15%%: %.2f\n", custo * 0.15);
        	printf("Preço Final ao Consumidor: %.2f\n", custo + custo * 0.1 + custo * 0.15);
        } else {
        	printf("Distribuidor 15%%: %.2f\n", custo * 0.15);
        	printf("Impostos 20%%: %.2f\n", custo * 0.2);
        	printf("Preço Final ao Consumidor: %.2f\n", custo + custo * 0.15 + custo * 0.2);
        }
    }
	return 0;		
}
