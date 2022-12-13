#include <stdio.h>
#include <stdlib.h>

int resto(int a,int b)
{
    if(b>a) return a;
    else return resto(a-b,b);
}

int main()
{
    int a,b,c;
    printf("Escreba dois numeros a,b \n");
    scanf("%d,%d",&a,&b);
    c=resto(a,b);
    printf(" O resto da diviçao enteira do primerio pelo segundo e igual a %d",c);
    return 0;
}
