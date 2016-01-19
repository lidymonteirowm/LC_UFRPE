#include <stdio.h>
int main () {
	int h_inicio, min_inicio, seg_inicio, seg_duracao, converte_h_inicio, horario_termino;
	printf("---------- Experimento -----------\n");
	printf("Digite a(s) hora(s) de inicio: ");
	scanf("%d", &h_inicio);
	printf("Digite o(s) minuto(s) de inicio: ");
	scanf("%d", &min_inicio);
	printf("Digite o(s) segundo(s) de inicio: ");
	scanf("%d", &seg_inicio);
	printf("Duracao em segundos: ");
	scanf("%d", &seg_duracao);
	converte_h_inicio = h_inicio*60*60 + min_inicio*60 + seg_inicio; 
	horario_termino = converte_h_inicio + seg_duracao;
	printf("Horario de término: %dh:%dmin:%ds", horario_termino/3600, (horario_termino%3600)/60, (horario_termino%3600)%60);
    return 0;
}
