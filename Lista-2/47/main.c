#include <stdio.h>

int termo;
int main()
{
    int i;
    int a[1000], n;
    printf("\nDigite quantos termos deseja adicionar ao vetor: ");
    scanf("%d", &n);
    for(i=0;i<n;++i)
    {
        printf("\n%do -->  ",i+1);
        scanf("%d",&a[i]);
    }
    int ordenado(int x[],int y);
    termo=ordenado(a,n);
    switch(termo)
    {
    case 0:
        printf("\n O vetor nao esta ordenado --> %d\n", termo);
        break;
    case 1:
        printf("\nO vetor esta ordenado em ordem crescente --> %d\n", termo);
        break;
    case 2:
        printf("\nO vetor esta ordenado em ordem decrescente --> %d\n", termo);
    }
    return 0;
}
int ordenado(int x[], int y)
{
    int i, k, z;
    termo=0;
    for(i=0,k=0,z=0;i<y-1;++i)
    {
        x[i]<x[i+1]?++k:0;
        x[i]>x[i+1]?++z:0;
        k>0&&z==0?termo=1:z>0&&k==0?termo=2:z>0&&k>0?termo=0:0;
    }
    return termo;
}
