/*Programa lê um inteiro positivo n e imprime o valor da soma:
1 + 2 + 3 + ... + n
Uma solução alternativa é calcular a soma da PA com razão 1:
soma = (n * (n + 1)) / 2
*/

#include <stdio.h>
void main(){
  int n, soma=0, i;
  printf("Digite um inteiro positivo: ");
  scanf("%d", &n);
  for(i=1; i<=n; i++){
    soma = soma + i;
  }
  printf("\nSoma dos %d primeiros inteiros positivos: %d\n", n, soma);
}
