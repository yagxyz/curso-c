#include <stdio.h>

int diagonal;
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
    int matrix_diagonal(int x[],int y);
    diagonal=matrix_diagonal(a,n);
    switch(diagonal)
    {
    case 1:
        printf("\nA matriz e diagonal --> %d\n", diagonal);
        break;
    default:
        printf("\nA matriz nao e diagonal --> %d\n",diagonal);
    }

    return 0;
}
int matrix_diagonal(int x[],int y)
{
    int i, j, k, c;
    diagonal=0;
    for(i=0,j=0,k=0,c=0;c<y;++i,++j)
    {
        int l=0;
        for(;l<y;++i,++j)
        {
            i==j&&x[i*y+j]==1?++k:0;
            i!=j&&x[i*y+j]!=0?--k:0;
            j==y-1?j=-1:0;
            i==y-1?i=-1:0;
            ++l;
        }
        ++c;
        --j;
        i==y-1?i=-1:0;
        diagonal=k;
    }
    diagonal==y?diagonal=1:diagonal!=y?diagonal=0:0;
    return diagonal;
}
