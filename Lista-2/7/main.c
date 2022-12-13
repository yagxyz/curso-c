#include <stdio.h>
#include <stdlib.h>


int tipo_triangulo(double a, double b, double c)
{
    int tipo;

    if ((a!=b)&&(a!=c)&&(b!=c)){tipo=1;}
    else if ((a==b)&&(b==c)) {tipo=2;}
    else {tipo=0;}
    return tipo;
}


int main()
{
    while(1){
    double a, b, c;
    int tipo;

    scanf("%lf, %lf, %lf", &a, &b, &c);
    tipo = tipo_triangulo(a, b, c);
    printf("O triângulo é do tipo %d.\n", tipo);
    }

    return 0;
}
