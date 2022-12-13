#include <stdio.h>
#include <stdlib.h>

void bubblesort(int vetor[], int n, int o)
{
    int k, p, aux;
    for (p=0;p<n-1;p++)
    {
        for(k=0;k<n-1-p;k++)
        {
            if(o*vetor[k]>o*vetor[k+1])
            {
                aux = vetor[k];
                vetor[k] = vetor[k+1];
                vetor[k+1] = aux;
            }
        }
    }
}

int busca_binaria(int vetor[], int n, int i)
{
    int tent=0, p=0, u=n-1, m;
    while(u>=p)
    {
        tent++;
        m = (u+p)/2;
        if(vetor[m]==i) {return tent;}
        else if(vetor[m]>i) {u = m-1;}
             else {p=m+1;}
    }
    return 0;
}
int main()
{
    int n, i, k, retorno, o;

    printf("Tamanho do vetor:\n");
    scanf("%d", &n);

    int vetor[n];

    printf("Vetor:\n");
    for(k=0; k<n; k++){
        scanf("%d", &vetor[k]);
    }
    printf("Número:\n");
    scanf("%d", &i);

    bubblesort(vetor, n, o);
    retorno = busca_binaria(vetor, n, i);

    printf("O numero de tentativas foi %d", retorno);

    return 0;
}


