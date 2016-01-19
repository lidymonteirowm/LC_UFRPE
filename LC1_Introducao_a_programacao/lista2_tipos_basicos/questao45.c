#include <stdio.h>
int main () {
	char letra_maiusc;
	printf("Digite uma letra maiuscula: ");
	scanf("%c", &letra_maiusc);
	printf("Minuscula: %c", letra_maiusc+32);
    return 0;
}
