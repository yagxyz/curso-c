#include <stdio.h>

int inversivel;
int main()
{
    int a[1000]={0}, n;
    printf("\nDigite quantas linhas deseja ter na matriz quadrada: ");
    scanf("%d", &n);
    printf("\nDigite os termos:\n");
    for(int i=0;i<(n*n);++i)

    {
        printf(" %do -->",i+1);
        scanf("%d",&a[i]);
    }
    int matrix_inversivel(int x[],int y);
    inversivel=matrix_inversivel(a,n);
    switch(inversivel)
    {
    case 0:
        printf("\nA matriz nao e inversivel --> %d\n", inversivel);
        break;
    case 1:
        printf("\nA matris e inversivel --> %d\n", inversivel);
    }
    return 0;
}
int matrix_inversivel(int x[],int y)
{
    inversivel=0;
    for(int i=0,j=0,k=0,c=0;c<y;++i,++j)
    {
        int z=1,l=0,m=1;
        for(;l<y;++i,++j)
        {
            z*=x[i*y+j];
            j==y-1?j=-1:0;
            i==y-1?i=-1:0;
            ++l;
        }
        l=0;
        for(;l<y;++i,--j)
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
        inversivel=k;
    }
    inversivel!=0?inversivel=1:0;
    return inversivel;
}
