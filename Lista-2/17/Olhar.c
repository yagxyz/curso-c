#include <stdio.h>

int local;
int main()
{
    int vet[100]={0}, i, n;
    printf("\nDigite quantos elementos deseja adicionar ao vetor: ");
    scanf("%i", &n);
    printf("\nDigite os numeros do vetor:\n");
    for(int k=0; k<n;++k)
    {
        scanf("%i", &vet[k]);
    }
    printf("Digite o numero que deseja procurar no vetor: ");
    scanf("%d", &i);
    int busca_sequencial(int x[],int y, int z);
    local=busca_sequencial(vet,n,i);
    switch(local)
    {
    case 0:
        printf("\nNumero nao encontrado --> 0\n");
        break;
    default:
        printf("\nNumero encontrado. Posicao --> %d\n", local);
    }
    return 0;
}
int busca_sequencial(int x[], int y, int z)
{
    local=0;
    for(int k=0; k<y; ++k)
    {
        z==x[k]?local=k+1:0;
    }
    return local;
}
