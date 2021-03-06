#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define BOLAS_CARTELA 18
#define QTD_BOLAS 90

typedef struct {
	int id;
	int num[BOLAS_CARTELA];
	int bolas_restante;
} cart;

int aux_sort[QTD_BOLAS];
int qtd_cartelas;
int num_sorteado;
int cont_bolas_sorteadas = 0;
char resposta;

void imprimeBingo();
void exibe_abertura();
void le_cartelas(cart cartela[], cart cartela_aux[]);
void armazena_bola_sorteada(int num);
void verifica_bola(int numero, cart cartela[]);
void exibe_sorteadas();
void exibe_cartela(cart cartela[]);
void exibe_bola_restante(cart cartela[]);
void exibe_sorteadas_parcial(int aux_sort[]);
int conf_num();
int verifica_vencedor(cart cartela[]);
void exibe_vencedor(cart cartela[], cart cartela_aux[]);
void valida_range();
void valida_bola();
int desempenho(float porcentagem);

FILE *fp_backup;

int main (){
    system("start abertura.mp3");
	int cont_aux = 0;
	char tecla;
	setlocale(LC_ALL, "Portuguese");

    exibe_abertura();
    printf(">>>> Pressione ENTER para iniciar...");
    char enter = 0;
    while (enter != '\r' && enter != '\n'){
            enter = getchar();
    }
    system("cls");
	fp_backup = fopen("backup_sorteadas.txt", "w"); fclose(fp_backup);
	int i, j;
	FILE *fp_cartela;
	fp_cartela = fopen("cartela.txt", "r");
	if (fp_cartela == NULL){
		printf("Arquivo de cartela n�o pode ser aberto ou nao foi encontrado!\n");
		exit(1);
	}
	else {
		fscanf(fp_cartela, "%d", &qtd_cartelas);
	}
	cart cartela[qtd_cartelas];
	cart cartela_aux[qtd_cartelas];
	le_cartelas(cartela, cartela_aux);
	printf("\nBola Sorteada: ");
	while(verifica_vencedor(cartela) != 0){
		while(scanf("%d", &num_sorteado) != 1){
			while (getchar() != '\n');
			printf("Bola inexistente. Digite outra: ");
		}
		valida_bola();
		system("cls");
		aux_sort[cont_aux] = num_sorteado;
		cont_aux++;
		armazena_bola_sorteada(num_sorteado);
		cont_bolas_sorteadas++;
		verifica_bola(num_sorteado, cartela);
		exibe_cartela(cartela);
		printf("\n");
		exibe_bola_restante(cartela);
		printf("\n");
		exibe_sorteadas_parcial(aux_sort);
	}
	system("start abertura.mp3");
	system("cls");
    imprimeBingo();
	printf("\n");
	exibe_abertura();
	exibe_sorteadas();
    exibe_vencedor(cartela, cartela_aux);
    printf("\n");
	return 0;
}

void valida_range(){
	while (num_sorteado<=0 || num_sorteado>90){
		printf("Fora do range: Bola invalida! Digite outra: ");
		while(scanf("%d", &num_sorteado) != 1){
			while (getchar() != '\n');
			printf("Bola inexistente. Digite outra: ");
		}
	}
	valida_bola();
}

void valida_bola(){
	int i, conf = 0;
	while (num_sorteado<=0 || num_sorteado>90){
			printf("Bola invalida!!! Digite outra: ");
			while(scanf("%d", &num_sorteado) != 1){
				while (getchar() != '\n');
				printf("Bola inexistente. Digite outra: ");
		}
	}
	for (i=0; i<cont_bolas_sorteadas; i++){
		if (num_sorteado == aux_sort[i]){
			printf("Bola ja sorteada! Digite outra: ");
			while(scanf("%d", &num_sorteado) != 1){
				while (getchar() != '\n');
				printf("Bola inexistente. Digite outra: ");
			}
			valida_range();
			break;
		}
	}
}

void exibe_vencedor(cart cartela[], cart cartela_aux[]){
	int i, j, cont_vencedor = 1;
	for(i=0; i<qtd_cartelas; i++){
		if (cartela[i].bolas_restante == 0){
			printf("\nVencedor %d: \nCartela %2d | ", cont_vencedor, cartela[i].id);
			for(j=0; j<BOLAS_CARTELA; j++){
				printf("%02d ", cartela_aux[i].num[j]);
			}
			cont_vencedor++;
			printf("\n");
		}
	}
	printf("\nID\t\t\tCARTELA\t\t\t\t     BA\t\t DESEMPENHO \n");
	for(i=0; i<qtd_cartelas; i++){
		if (cartela[i].bolas_restante != 0){
			printf("%2d | ", cartela[i].id);
			for(j=0; j<BOLAS_CARTELA; j++){
				printf("%02d ", cartela_aux[i].num[j]);

			}
			printf("| %02d ",BOLAS_CARTELA - cartela[i].bolas_restante);
        /* Exibir barra */
        int completo = 0;
        float num = 100;
	    for(; completo <= num; completo++) {
				desempenho(((BOLAS_CARTELA - cartela[i].bolas_restante) * 100.00)/18);
				printf("\r");
				break;
	    }
        /* Fim exibir barra */
			printf("\n");
		}
	}
}

int desempenho (float porcentagem){
	int x;
	for(x = 0; x < porcentagem; x++){
		printf("|");
		_sleep(50);
  }
    printf("%.2f%%\r", porcentagem);
    fflush(stdout);
    return(EXIT_SUCCESS);
}

int verifica_vencedor(cart cartela[]){
	int verifica, i, j;
	verifica = cartela[0].bolas_restante;
	for(i=0; i<qtd_cartelas; i++){
		for (j=0; j<qtd_cartelas; j++){
			if (cartela[j].bolas_restante < verifica){
				verifica = cartela[j].bolas_restante;
			}
		}
	}
	return verifica;
}

int conf_num(){
	int i, conf = 0;
	for (i=0; i<cont_bolas_sorteadas; i++){
		if (num_sorteado == aux_sort[i]){
			conf = 1;
			break;
		}
	}
	if (conf == 1){
		return -1;
	}
	else{
		return 0;
	}
}

void exibe_sorteadas_parcial (int aux_sort[]){
	int i, j, aux;
	for (i=0; i<(cont_bolas_sorteadas-1); i++) {
		for (j=0; j<(cont_bolas_sorteadas-i-1); j++){
			if (aux_sort[j] > aux_sort[j+1]){
				aux = aux_sort[j];
				aux_sort[j] = aux_sort[j+1];
				aux_sort[j+1] = aux;
			}
		}
	}
	printf("Bolas Sorteadas: ");
	for(i=0; i<cont_bolas_sorteadas; i++){
		printf("%d ", aux_sort[i]);
	}
	printf("\n");
}

// L� o arquivo com a cartela e exibe na tela
void le_cartelas(cart cartela[], cart cartela_aux[]){
	int i, j, x;
	FILE *fp_cartela;
	fp_cartela = fopen("cartela.txt", "r");
	if (fp_cartela == NULL){
		printf("Arquivo de cartela n�o pode ser aberto ou nao foi encontrado!\n");
		exit(1);
	}
	else {
		if(fscanf(fp_cartela, "%d", &x) != EOF){
			for (i=0; i< x; i++){
				fscanf(fp_cartela, "%d", &cartela[i].id);
				printf("%2d ", cartela[i].id);
				cartela[i].bolas_restante = BOLAS_CARTELA;
				for (j=0; j<BOLAS_CARTELA; j++){
					fscanf(fp_cartela, "%d", &cartela[i].num[j]);
					printf("%02d ", cartela[i].num[j]);
				}
				printf("\n");
			}
		}
		else{
			printf("Arquivo vazio\n");
			exit(1);
		}
	}
	/* copia para cartela auxiliar */
	for (i=0; i< x; i++){
		cartela_aux[i].id = cartela[i].id;
		cartela_aux[i].bolas_restante = cartela[i].bolas_restante;
		for (j=0; j<BOLAS_CARTELA; j++){
			cartela_aux[i].num[j] = cartela[i].num[j];
		}
	}
}

void exibe_bola_restante(cart cartela[]){
	int i, j;
	printf("RESUMO:\n");
	for(j=0; j<qtd_cartelas; j++){
		printf("%d | Faltam %d Bolas \n" , cartela[j].id, cartela[j].bolas_restante);
		if(cartela[j].bolas_restante == 1){
            system("start cartela_armada.mp3");
		}
	}

}

void verifica_bola(int numero, cart cartela[]){
	int i, j;
	for(i=0; i<qtd_cartelas; i++){
		for (j=0; j<BOLAS_CARTELA; j++){
			//verifica se a bola sorteada est� na cartela
			if(cartela[i].num[j] == num_sorteado) {
				cartela[i].num[j] = -1;
				cartela[i].bolas_restante = cartela[i].bolas_restante - 1;
			}
		}
	}
}

void exibe_sorteadas (){
	int i, j, aux, bolas_sorteadas[90];
	fp_backup = fopen("backup_sorteadas.txt", "r");
	if (fp_backup == NULL){
		printf("Arquivo de backup n�o pode ser lido ou n�o foi encontrado!\n");
		exit(1);
	}
	else {
		// Armazenando as bolas que estao no backup em um vetor
		for (i=0; i<cont_bolas_sorteadas; i++){
			fscanf(fp_backup, "%d", &bolas_sorteadas[i]);
		}
	}
	fclose(fp_backup);
	printf("Bolas Sorteadas: ");
	for(i=0; i<cont_bolas_sorteadas; i++){
		printf("%d ", bolas_sorteadas[i]);
	}
	printf("\n");
}

// Armazena bola sorteada no arquivo de backup
void armazena_bola_sorteada(int num){
	int i, j;
	if (num_sorteado > 0){
		fp_backup = fopen("backup_sorteadas.txt", "a+");
		if (fp_backup == NULL){
			printf("Arquivo de backup n�o pode ser aberto ou nao foi encontrado!\n");
			exit(1);
		}
		fprintf(fp_backup, "%d ", num_sorteado);
		fclose(fp_backup);
	}
}

void exibe_cartela(cart cartela[]){
	int i=0, j=0;
	for (i=0; i< qtd_cartelas; i++){
		printf("%2d ", cartela[i].id);
		for (j=0; j<18; j++){
			if (cartela[i].num[j] == -1) {
				printf(" X ");
			}
			else {
				printf("%02d ", cartela[i].num[j]);
			}
		}
		printf("\n");
	}
}

void exibe_abertura(){

		printf("                                                               \n");
		printf("          #####                                                 \n");
		printf("          #    #                                                \n");
		printf("          #    #   #   #    #   #####    ######  ####    ###### \n");
		printf("          #  ##    #   ##   #   #        #    #  #    #  #    # \n");
		printf("          #    #   #   # #  #   #  ###   ######  #    #  ###### \n");
		printf("          #    #   #   #  # #   #   #    #    #  #    #  #    # \n");
		printf("          #####    #   #   ##   #####    #    #  #####   #    # \n");
		printf("                                                               \n");
		printf("                                                               \n");
		printf("                                                               \n");
		printf("            #   #   ######  #####    #####  #####                \n");
		printf("            #   #   #       #    #   #   #  #                    \n");
		printf("            #   #   ####    #####    #####  ####                 \n");
		printf("            #   #   #       #    #   #      #                   \n");
		printf("            #####   #       #    #   #      #####               \n");
		printf("------------------------------------------------------------------\n");
		printf("          Equipe: Bruno Rocha, Daecio Pontes e Lidiane Monteiro     \n\n");

}
void imprimeBingo(){
	int l, i,j;
    char bingo[][29] = {{'X','X','X','X','X',' ','X','X','X','X','X',' ','X',' ',' ',' ','X',' ','X','X','X','X','X',' ','X','X','X','X','X'},
        {'X',' ',' ',' ','X',' ',' ',' ','X',' ',' ',' ','X','X',' ',' ','X',' ','X',' ',' ',' ',' ',' ','X',' ',' ',' ','X'},
        {'X','X','X','X',' ',' ',' ',' ','X',' ',' ',' ','X',' ','X',' ','X',' ','X',' ',' ','X','X',' ','X',' ',' ',' ','X'},
        {'X',' ',' ',' ','X',' ',' ',' ','X',' ',' ',' ','X',' ',' ','X','X',' ','X',' ',' ',' ','X',' ','X',' ',' ',' ','X'},
        {'X','X','X','X','X',' ','X','X','X','X','X',' ','X',' ',' ',' ','X',' ','X','X','X','X','X',' ','X','X','X','X','X'}
    };
    for (i=0; i<5; i++){
        for(j=0; j<29; j++){
            printf("%c",bingo[i][j]);
            _sleep(20);
        }
        printf("\n");
    }
    system("cls");
    for(l=0; l<5; l++){
	    for (i=0; i<5; i++){
	        for(j=0; j<29; j++){
	            printf("%c",bingo[i][j]);
	        }
	        printf("\n");
	        _sleep(100);
	    }
    	system("cls");
    }
}
