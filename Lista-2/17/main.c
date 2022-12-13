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
        printf("O número %d não está presente no vetor.\n", i);
    }
    else {
        printf("O número %d está presente no vetor. Tentativas: %d.\n", i, cont+1);
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
    printf("Número:\n");
    scanf("%d", &i);

    retorno = busca_sequencial(vetor, n, i);

    return 0;
}

