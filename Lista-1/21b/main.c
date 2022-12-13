#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,c;
    float ab,bc,ac;

    printf("Digite os lados do Triangulo\n");
    scanf("%f%f%f", &a,&b,&c);

    ab=a+b;
    bc=b+c;
    ac=a+c;

    if ((c<ab)&&(a<bc)&&(b<ac))
    {
        if ((a==b)&&(b==c)&&(c==a))
        {
        printf("Triangulo Equilatero\n");
        }
        else if ((a==b)||(b==c)||(a==c))
        {
        printf("Triangulo Isosceles\n");
        }
        else if ((a!=b)&&(b!=c)&&(c!=a))
        {
        printf("Trinagulo Escaleno\n");
        }
    }
    else
        printf("Estes lados nao formam um Tiangulo\n");



    return 0;
}
