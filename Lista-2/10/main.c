#include <stdio.h>
#include <stdlib.h>



int somatorio(int n)
{
    int soma = 0;
    int i;
    for (i=1; i<=n; i++){
        soma = soma + i;
    }
    printf("O somatório é %d./n", soma);
    return soma;
}

int main()
{
    int n, soma;
    scanf("%d", &n);
    soma = somatorio(n);
    return 0;
}


