#include <stdio.h>

int menor;
int main()
{
    int a[1000]={0},n;
    printf("Digite quantos termos deseja adicionar ao vetor: ");
    scanf("%d", &n);
    printf("\nDigite os elementos do vetor: \n");
    for(int i=0; i<n; ++i)
    {
        scanf("%d", &a[i]);
    }
    int min(int x[], int y);
    menor=min(a,n);
    printf("\nO menor elemento do vetor e: %d\n", menor);
    return 0;
}
int min(int x[], int y)
{
    menor=x[0];
    for(int i=1;i<y;++i)
    {
        x[i]<menor?menor=x[i]:0;
    }
    return menor;
}
