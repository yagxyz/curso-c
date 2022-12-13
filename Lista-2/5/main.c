#include <stdio.h>

int maior_de_tres(int x, int y, int z)
{
    int maior;
    (x>y&&x>z) ? maior = x : 0 ;
    (y>x&&y>z) ? maior = y : 0 ;
    (z>x&&z>y) ? maior = z : 0 ;
    return maior;
}

int main()
{
    int a, b, c, maior;
    printf("\nDigite o valor de tres numeros: \n");
    scanf("%d%d%d", &a, &b, &c);
    int maior_de_tres(int x, int y, int z);
    maior=maior_de_tres(a,b,c);
    printf("\nO maior numero eh: %d\n", maior);
    return 0;
}
