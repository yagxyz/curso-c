#include <stdio.h>
#include <stdlib.h>

int divd(int a,int b)
{
    if(b>a) return 0;
    else return 1+divd(a-b,b);
}

int main()
{
    int a,b,c;
    printf("Escreba dois numeros a,b \n");
    scanf("%d,%d",&a,&b);
    c=divd(a,b);
    printf(" A diviçao enteira do primerio pelo segundo e igual a %d",c);
    return 0;
}
