#include <stdio.h>
int main(){
	float num;
	scanf("%f", &num);
	printf("Reajuste de 10%%: %.2f\n", num + num*0.1);
	return 0;
}