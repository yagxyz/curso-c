#include <stdio.h>
#include <stdlib.h>

int sub(int a,int b)
{
    if(b==0) return a;
    else return sub(a-1,b-1);
}

int main()
{
    int a,b,c;
    printf("Escreba dois numeros a,b \n");
    scanf("%d,%d",&a,&b);
    c=sub(a,b);
    printf(" A subtracao do primerio pelo segundo e igual a %d",c);
    return 0;
}
