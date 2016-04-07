/*Programa lê um inteiro positivo e imprime os n primeiros ímpares.
Solução alternativa: usar a definição: impar = 2*i + 1 */

#include <stdio.h>
void main(){
  int n, i, impar = 1;
  scanf("%d", &n);
  for(i=0; i<n; i++){
    printf("%d ", impar);
    impar = impar + 2;
    printf("\n");
  }
}
