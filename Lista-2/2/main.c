#include <stdio.h>
#include <stdlib.h>
#include <math.h>


double calcula_distancia(double x[], double y[])
{
    double distancia;
    distancia = sqrt(pow(x[0] - y[0], 2)+pow(x[1] - y[1], 2));
    return distancia;
}

int main()
{
    double x[2], y[2];
    double distancia;

    printf("Digite a primeira coordenada (x,y):\n");
    scanf("%lf, %lf", &x[0], &x[1]);
    printf("Digite a segunda coordenada (x,y):\n");
    scanf("%lf, %lf", &y[0], &y[1]);

    distancia = calcula_distancia(x, y);
    printf("A distância é %lf", distancia);

    return 0;
}

