#include <stdio.h>
#include <math.h>

int bin, z,c;
int main()
{
    int a;
    printf("\nDigite um numero: ");
    scanf("%d", &a);
    int decimal_binario(int x);
    bin=decimal_binario(a);
    printf("\nO numero em binario e: %d\n",bin);
    return 0;
}

int decimal_binario(int x)
{
    bin=0;
    int i=0;
    for(;x>0;++i)
    {
        int potencia(int k);
        int potencia1(int l);
        z=potencia(i);
        c=potencia1(i);
        z<=x&&z>x/2?bin+=c,x-=z,i=-1:0;

    }
    return bin;
}
int potencia(int k)
{
    z=0;
    z=pow(2,k);
    return z;
}
int potencia1(int l)
{
    c=0;
    c=pow(10,l);
    c!=1&&c%10!=0?++c:0;
    return c;
}
