#include <stdio.h>
#include <stdlib.h>



int produto_escalar(int a[], int b[], int n)
{
    int produto = 0;
    int i;
    for (i=0; i<n; i++){
        produto = produto + a[i] * b[i];
    }
    printf("O produto escalar entre os vetores é %d\n", produto);

    return produto;
}

int main()
{
    int a[50], b[50], n, i, produto;
    printf("Digite o tamanho dos vetores:\n");
    scanf("%d", &n);
    printf("Digite o primeiro vetor:\n");
    for (i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    printf("Digite o segundo vetor:\n");
    for (i=0; i<n; i++){
        scanf("%d", &b[i]);
    }
    produto = produto_escalar(a, b, n);
    return 0;
}



