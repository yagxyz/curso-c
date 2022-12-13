#include <stdio.h>
#include <stdlib.h>

int quadrante(double x,double y)
{
    int quad;
    if ((x==0)||(y==0)) {printf("O ponto pertence a um dos eixos.");}
    else {
        if(x>0){
            if(y>0) {quad = 1;}
            else    {quad = 4;}
        }else{
            if(y>0) {quad = 2;}
            else    {quad = 3;}
        }
        printf("O ponto de coordenadas (%lf, %lf) pertence ao %d quadrante.\n", x, y, quad);
    }
    return quad;
}

int main()
{
    while(1){
    double x, y;
    int quad;

    scanf("%lf, %lf", &x, &y);
    quad = quadrante(x, y);
    }

    return 0;
}



