#include <stdio.h>

int nesimo;
int main()
{
    int a, n, r;
    printf("\nDigite o primeiro termo da progressao geometrica: ");
    scanf("%d", &a);
    printf("\nDigite a razao da PG: ");
    scanf("%d", &r);
    printf("\nDigite a posicao do termo que deseja saber o valor: ");
    scanf("%d", &n);
    int nesimo_termoGA(int x, int y, int z);
    nesimo=nesimo_termoGA(a,n,r);
    printf("\nO valor do termo e %d\n", nesimo);
    return 0;
}
int nesimo_termoGA(int x, int y, int z)
{
    nesimo=x;
    for(int i=1;i<y;++i)
    {
        nesimo=nesimo*z;
    }
    return nesimo;
}

