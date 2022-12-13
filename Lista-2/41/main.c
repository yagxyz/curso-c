#include <stdio.h>

double media_ponderada(double x[], double w[], int n)
{
    int i;

    double a=0, b=0, media=0;
    for(i=0;i<=n;++i)
    {
        a+=x[i]*w[i];
        b+=w[i];
    }
    media=a/b;
    return media;
}

int main()
{
    int i;
    double a[1000],b[1000], media=0;;
    int n;
    printf("\nDigite quantos termos deseja adicionar aos dois vetores: ");
    scanf("%d", &n);
    printf("\nDigite os termos do primeiro vetor:\n");
    for(i=0;i<n;++i)
    {
        printf("io --> ");
        scanf("%lf",&a[i]);
    }
    printf("Digite os termos do segundo vetor:\n");
    for(i=0;i<n;++i)
    {
        printf("io --> ");
        scanf("%lf",&b[i]);
    }
    double media_ponderada(double x[],double y[], int z);
    media=media_ponderada(a,b,n);
    printf("\nA media ponderada dos dois vetores e: %lf\n",media);
    return 0;
}
