#include <stdio.h>
int main(){
	float media1, media2, medias;
	media1 = (8+9+7)/3.0;
	media2 = (4+5+6)/3.0;
	printf("Media dos numeros 8,9,7: %.2f\n", media1);
	printf("Media dos numeros 4,5,6: %.2f\n", media2);
	printf("Soma das duas medias: %.2f\n", media1+media2);
	printf("Media das medias: %.2f\n",(media1+media2)/2);
	return 0;
}