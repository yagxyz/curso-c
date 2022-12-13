#include <stdio.h>
#include <conio.h>

int main()
{
    float Dep, Tax;
    float a;

    printf("Digite o valor de seu deposito \n");
    scanf("%f", &Dep);

    printf("Digite o valor das taxas de juros \n");
    scanf("%f", &Tax);

    Tax=Dep*Tax/100;
    a=Dep-Tax;

    printf("Valor valor real do depósito seria: %f", a);

    return 0;
}
