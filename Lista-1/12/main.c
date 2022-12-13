#include <stdio.h>
#include <stdlib.h>

int main()
{

int a, b;
short int c;

printf("Digite o valor atual do salario  mínimo\n");
scanf("%i", &a);

printf("Digite seu salario\n");
scanf("%i", &b);

c=b/a;

    printf("Esta pessoa ganha %hi salarios mínimos\n", c);
    return 0;
}
