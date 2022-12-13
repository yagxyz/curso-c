#include <stdio.h>

int magico;
int main()
{
    int i;
    int a[1000],n;
    printf("\nDigite quantas linhas deseja adicionar a matriz quadrada: ");
    scanf("%d", &n);
    printf("\nDigite os termos:");
    for(i=0;i<n*n;++i)
    {
        printf("\n%do --> ",i+1);
        scanf("%d",&a[i]);
    }
    int quadrado_magico(int x[],int y);
    magico=quadrado_magico(a,n);
    switch(magico)
    {
    case 1:
        printf("\nA matriz e um quadrado magico --> %d\n",magico);
        break;
    default:
        printf("\nA matriz nao e um quadrado magico --> %d\n",magico);
    }
    return 0;
}
int quadrado_magico(int x[],int y)
{
    int i, j;
    magico=0;
    int k=0,l=0;
    for(i=0,j=0;i<y;++i)
    {
        j=0;
        for(;j<y;++j)
        {
            k+=x[i*y+j];//soma as linhas
        }
        j=i;
        i=0;
        for(;i<y;++i)
        {
            l+=x[i*y+j];//soma as colunas
        }
        i=j;
        k==l?++magico:0;
        printf("\n magico --> %d   k --> %d   l --> %d\n  i --> %d  j --> %d", magico,k,l,i,j);
    }
    magico==y?magico=10:0;
    return magico;
}
