#include <stdio.h>
int main()
{
    int num;
    printf("Numero inteiro: ");
    scanf("%d", &num);
    printf("Antecessor: %d\n", num-1);
    printf("Sucessor: %d\n", num+1);
    return 0;
}
