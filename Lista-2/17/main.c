#include <stdio.h>
#include <stdlib.h>


int busca_sequencial(int vetor[], int n, int i)
{
    int cont=0, k;

    for (k=0; k<n; k++){
        if(vetor[k]!=i){
            cont++;
        }
        else break;
    }

    if (cont == n) {
        printf("O n�mero %d n�o est� presente no vetor.\n", i);
    }
    else {
        printf("O n�mero %d est� presente no vetor. Tentativas: %d.\n", i, cont+1);
    }

    return cont;
}


int main()
{
    int n, i, k, retorno;

    printf("Tamanho do vetor:\n");
    scanf("%d", &n);

    int vetor[n];

    printf("Vetor:\n");
    for(k=0; k<n; k++){
        scanf("%d", &vetor[k]);
    }
    printf("N�mero:\n");
    scanf("%d", &i);

    retorno = busca_sequencial(vetor, n, i);

    return 0;
}

