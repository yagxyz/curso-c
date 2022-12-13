#include <stdio.h>

int determinante;
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
    int determinante_matrix(int x[],int y);
    determinante=determinante_matrix(a,n);
    printf("\nO determinante da matriz e: %d\n",determinante);
    return 0;
}
int determinante_matrix(int x[],int y)
{
    determinante=0;
    if(y>2)
    {
        int i, j, k, c;
        for(i=0,j=0,k=0,c=0; c<y; ++i,++j)
        {
            int z=1,l=0,m=1;
            for(; l<y; ++i,++j)
            {
                z*=x[i*y+j];
                j==y-1?j=-1:0;
                i==y-1?i=-1:0;
                ++l;
            }
            l=0;
            for(; l<y; ++i,--j)
            {
                m*=x[i*y+j];
                j==0?j=y:0;
                i==y-1?i=-1:0;
                ++l;
            }
            k+=z;
            k-=m;
            ++c;
            --j;
            i==y-1?i=-1:0;
            determinante=k;
        }
    }
    else
    {
        int i, j, k, c;
        for(i=0,j=0,k=0,c=0; c<y; ++i,++j)
        {
            int z=1,l=0;
            for(; l<y; ++i,++j)
            {
                z*=x[i*y+j];
                j==y-1?j=-1:0;
                i==y-1?i=-1:0;
                ++l;
            }
            k+=z;
            ++c;
            --j;
            i==y-1?i=-1:0;
            determinante=k;
        }}
        return determinante;
}
