/* Programa lê uma sequência de números inteiros
  não nulos, seguida por zero para indicar o fim da sequência,
  e exibe o quadrado de cada número da sequência. */
#include <stdio.h>
void main(){
  int num;
  printf("Digite uma sequencia de numeros inteiros, nao-nula, seguida por zero: \n");
  scanf("%d", &num);
  while(num!=0){
    printf("\n%d ao quadrado: %d \n", num, num*num);
    scanf("%d", &num);
  }
}
