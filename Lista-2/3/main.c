#include <stdio.h>
#include <stdlib.h>


int nesimo_termoPA(int p, int n, int r)
{
    int f;
    f = (n-1)*r+p;
    return f;
}

int main()
{
    int f, p, n, r;
    printf("Digite o primeiro termo:\n");
    scanf("%d", &p);
    printf("Digite o n�mero de termos:\n");
    scanf("%d", &n);
    printf("Digite a raz�o:\n");
    scanf("%d", &r);

    f = nesimo_termoPA(p, n, r);
    printf("O %d termo � %d", n, f);

    return 0;
}
