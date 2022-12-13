#include <stdio.h>
#include <stdlib.h>

int main()
{
    float PrF, pl, pi;
    float l, i, Pr;

    printf("Digite o preço de fabrica do veiculo\n");
    scanf("%f", &PrF);

    printf("Digite o porcentagem de lucro do distribuidor\n");
    scanf("%f", &pl);

    printf("Digite o porcentagem de impostos\n");
    scanf("%f", &pi);

    l=PrF*(pl/100);
    i=PrF*(pi/100);
    Pr=PrF+l+i;

    printf("O lucro do distribiudor seria= %f\n", l);
    printf("Os impostos seriam= %f\n", i);
    printf("O preço final do carro seria d= %f\n", Pr);
}
