#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,t;

    printf("Digitar a hora de inicio e termino do jogo 24H\n");
    scanf("%d%d", &a,&b);

    if (a>b)
    {
    t=(24-a)+b;
    printf("Tempo de jogo = %d", t);
    }
    else if (b>a)
    {
    t=b-a;
    printf("Tempo de jogo = %d", t);
    }
    else if(b=a)
    {
    t=24;
    printf("Tempo de jogo = %d", t);
    }
    return 0;
}
