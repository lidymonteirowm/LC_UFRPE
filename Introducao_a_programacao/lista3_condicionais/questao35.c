#include <stdio.h> 
int main() 
{ 
	int dia , mes ,ano; 
	int ultimo_dia[] = {-1,31,28,31,30,31,30,31,31,30,31,30,31};
	for (;;){ 
		printf("Entre com dia [DD]..: "); 
		scanf ("%d",&dia); 
		printf("Entre com mes [MM]..: "); 
		scanf("%d",&mes); 
		printf("Entre com ano [AAAA]: "); 
		scanf("%d",&ano); 
		if(dia <= 0 || mes < 0 || mes > 12 || ano <= 0) { 
			printf("Data Invalida!\nFavor digitar novamente!\n"); 
			continue; 
			system("pause"); 
		}
		if ( ano % 4 == 0 && ( ano % 400 == 0 || ano % 100 != 0)) 
			ultimo_dia[2]= 29;
		else 
			ultimo_dia[2]= 28;
		if(dia > ultimo_dia[mes]) { 
			printf("DATA INVALIDA!\nFavor digitar novamente!\n"); 
			continue; 
			system("pause"); 
		}
		if (ano%4==0 && (ano%400==0||ano%100!=0)) { 
			printf("Ano Bissexto\n\n"); 
		}
		printf("Data informada %d/%d/%d é válida!\n", dia, mes, ano); 
		break; 
	} 
	return 0; 
}