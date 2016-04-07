/* Uma loja de discos anota diariamente durante o mês de março a quantidade de discos
vendidos. Determinar em que dia desse mês ocorreu a maior venda e qual foi a
quantidade de discos vendida nesse dia. */

/*Funciona para cds > 0 e vendas únicas
(exemplo: para n dias com mesma maior venda não funciona)*/

#include <stdio.h>
int main(){
  int i, cds, maior=0, melhor_dia, maior_venda;
  printf("\nMarço - Maiores Vendas: \n");
  for (i=1; i<=31; i++){
    printf("Dia %d: ", i);
    scanf("%d", &cds);
    if (cds > maior){
      melhor_dia = i;
      maior_venda = cds;
      maior = cds;
    }
  }
  printf("Dia: %d\n",melhor_dia);
  printf("Discos Vendidos: %d\n",maior_venda);
  return 0;
}
