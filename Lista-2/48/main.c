#include <stdio.h>

double desvio;
int main()
{
    int i;
    double a[1000];
    int n;
    printf("\nDigite quantos termos deseja adicionar ao vetor: ");
    scanf("%d", &n);
    for(i=0;i<n;++i)
    {
        printf("\n%do -->  ", i+1);
        scanf("%lf", &a[i]);
    }
    double media_dp(double x[], int y);
    desvio=media_dp(a,n);
    printf("\nO devio padrao do vetor e: %lf\n",desvio);
    return 0;
}
double media_dp(double x[], int y)
{
    int i;
    double k=0,m=0;
    for(i=0;i<y;++i)
    {
        k+=x[i];
    }
    k*=1.0/y;
    for(i=0;i<y;++i)
    {
        m+=pow((x[i]-k),2);
    }
    m*=1.0/y;
    m=pow(m,1/2.0);
    desvio=m;
    return desvio;
}
