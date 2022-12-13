#include <stdio.h>
#include <stdlib.h>

int main()
{
    float p,d,n;
    char c[6];

    printf("Digite o preco do produto\n");
    scanf("%f", &p);

    printf("Digite o codigo do produto xxxxxx\n\n");
    scanf(" %s", &c);

    if (p<=30)
    {
        d=0;
        n=p;
    }
    else if ((p>30)&&(p<=100))
    {
        d=p*0.1;
        n=p-d;
    }
    else if(p>100)
    {
      d=p*0.15;
        n=p-d;
    }
    printf("\nProduto: %s preco: %f desconto: %f NOVO PRECO: %f\n\n",c,p,d,n);
    return 0;
}
