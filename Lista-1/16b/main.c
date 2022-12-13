#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    float m, p, d;
    int op;
    printf("Digite dois numeros enteiros ");
    scanf("%d%d", &a,&b);

    m=(a+b)/2;
    p=a*b;
    d=a-b;

    printf("Digite uma operação \n '1' Media, '2' Produto, '3' Diferença ");
    scanf("%d", &op);

    switch(op)
    {
     case 1: printf("A media = %f", m);
     break;
     case 2: printf("O produto = %f", p);
     break;
     case 3: printf("A Difereça = %f", d);
     break;
     default: printf(" Erro ");
    }

    return 0;
}
