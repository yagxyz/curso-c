#include <stdio.h>
#include <stdlib.h>

int main()
{
    int r, a1, a10;
    printf("Escreva a raz�o r para uma progra��o aritmetica \n");

scanf("%i", &r);

printf("Escreva o nemero desejado para o primeiro termo \n");

scanf("%i", &a1);

a10=a1+(10-1)*r;

printf("O decimo termo da progra��o aritmetica= %i \n", a10);

    return 0;
}
