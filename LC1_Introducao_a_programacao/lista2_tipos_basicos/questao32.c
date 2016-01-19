#include <stdio.h>
int main()
{
    int num, suc_triplo, ant_dobro;
    printf("Numero inteiro: ");
    scanf("%d", &num);
    suc_triplo = (num*num*num) + 1;
    ant_dobro = (num*num) -1;
    printf("Sucessor do triplo de %d: %d\n", num, suc_triplo);
    printf("Antecessor do dobro de %d: %d\n", num, ant_dobro);
    printf("Soma: %d\n", suc_triplo + ant_dobro);
    return 0;
}
