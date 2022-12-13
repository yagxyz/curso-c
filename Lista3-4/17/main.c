#include <stdio.h>
#include <stdlib.h>


int binomio(int n, int k)
{
    if(n<k)return -1;
    if(n==k) return 1;
    if(k==1)return n;
    else return binomio(n-1,k)+binomio(n-1,k-1);
}


int main()
{
    int a,b,c;
    printf("Escreba dois numeros a,b \n");
    scanf("%d,%d",&a,&b);
    c=binomio(a,b);
    printf(" A convinação Binomial destes numeros e igual a %d",c);
    return 0;
}
