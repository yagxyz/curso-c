#include <stdio.h>

int maior;
int max_ind(int x[], int y)
{
    maior=0;
    for(int i=1;i<y;++i)
    {
        x[maior]<x[i]?maior=i:0;
    }
    return maior+1;
}


int main()
{
    int a[1000]={0}, n;
    printf("\nDigite quantos elementos deseja adicionar ao vetor: ");
    scanf("%d", &n);
    printf("\nDigite os elementos do vetor: \n");
    for(int i=0; i<n; ++i)
    {
        scanf("%d", &a[i]);
    }
    int max_ind(int x[], int y);
    maior=max_ind(a,n);
    printf("\nA posicao do maior elemento do vetor e: %d\n", maior);
    return 0;
}
