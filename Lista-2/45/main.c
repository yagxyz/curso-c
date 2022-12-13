#include <stdio.h>

int simetrica;
int main()
{
    int i;
    int a[1000]= {0}, n;
    printf("\nDigite quantas linhas deseja ter na matriz quadrada: ");
    scanf("%d", &n);
    printf("\nDigite os termos:\n");
    for(i=0; i<(n*n); ++i)
    {
        printf(" %do -->",i+1);
        scanf("%d",&a[i]);
    }
    int matrix_simetrica(int x[],int y);
    simetrica=matrix_simetrica(a,n);
    switch(simetrica)
    {
    case 1:
        printf("\nA matriz e simetrica --> %d\n", simetrica);
        break;
    default:
        printf("\nA matriz nao e simetrica --> %d\n", simetrica);
    }
}
int matrix_simetrica(int x[],int y)
{
    int i, j, k, c;
    simetrica=0;
    for(i=0,j=0,k=0,c=0;c<y;++i,++j)
    {
        int l=0;
        for(;l<y;++i,++j)
        {
            x[i*y+j]==x[j*y+i]?++k:0;
            j==y-1?j=-1:0;
            i==y-1?i=-1:0;
            ++l;
        }
        ++c;
        --j;
        i==y-1?i=-1:0;
        simetrica=k;
    }
    simetrica==y*y?simetrica=1:simetrica!=y*y?simetrica=0:0;
    return simetrica;
}
