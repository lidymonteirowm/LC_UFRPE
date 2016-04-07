/* Programa lê um inteiro(base), um expoente e calcula x^n. */
#include <stdio.h>
void main(){
  int x, i, n, potencia = 1;
  printf("Digite um inteiro nao-negativo: ");
  scanf("%d", &x);
  printf("Expoente: ");
  scanf("%d", &n);
  for(i=0; i<n; i++){
    potencia = potencia * x;
  }
  printf("%d elevado a %d: %d\n", x, n, potencia);
}
