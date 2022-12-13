#include <stdio.h>

int menor;
int main()
{
    int a[1000]={0}, n;
    printf("Digite o numero de elementos que desja adicionar ao vetor: ");
    scanf("%d", &n);
    printf("Digite os elementos do vetor: \n");
    for(int i=0;i<n;++i)
    {
        scanf("%d", &a[i]);
    }
    int min_ind(int x[], int y);
    menor=min_ind(a,n);
    printf("\nO menor elemento do vetor esta na posicao %d\n", menor);
    return 0;
}
int min_ind(int x[], int y)
{
    menor=0;
    for(int i=1;i<y;++i)
    {
        x[menor]>x[i]?menor=i:0;
    }
    return menor+1;
}

