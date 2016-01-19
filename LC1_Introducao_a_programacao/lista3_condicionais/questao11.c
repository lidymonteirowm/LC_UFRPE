#include <stdio.h>
int main () 
{
  int num, soma, algarismo;
  printf ("Digite um numero inteiro: ");
  scanf ("%d", &num);
  if (num>0) {
  	soma = 0;
  	while (num != 0) {
      algarismo = num % 10; 
      num = num / 10; 
      soma = soma + algarismo; 
    }
    printf ("Soma dos algarismos: %d \n", soma);
  }
  else {
  	printf("Número inválido!");
  }
  return 0;
}