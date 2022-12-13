#include <stdio.h>
#include <stdlib.h>
//#define TAM_MAX 50

int soma_dos_pares(int v[], int tam)
{
    int soma = 0;
    int i;

    for(i=0; i<tam; i++){
        if(v[i]%2==0){
            soma = soma + v[i];
        }
    }
    printf("A soma dos termos pares do vetor é %d", soma);

    return soma;
}

int main()
{
    int tam, i, soma;

    printf("Digite o tamanho do vetor:\n");
    scanf("%d", &tam);

    int v[tam];

    printf("Digite o vetor:\n");
    for (i=0; i<tam; i++){
        scanf("%d", &v[i]);
    }
    soma = soma_dos_pares(v, tam);

    return 0;
}

