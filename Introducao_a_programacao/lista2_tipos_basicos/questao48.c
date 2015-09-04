#include <stdio.h>
int main (){
	int seg;
	printf("Digite quantos segundos deseja converter para h:m:s: ");
	scanf("%d", &seg);
	printf("%d segundos = %dh:%dmin:%ds", seg, seg/3600, (seg%3600)/60, (seg%3600)%60);
    return 0;
}
