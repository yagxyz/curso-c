#include <stdio.h>
#include <stdlib.h>


int log2m(int a)
{
    if(2>a) return 0;
    else return 1+log2m(a/2);
}


int main()
{
    int a,b;
    printf("Escreba um numero a\n");
    scanf("%d",&a);
    b=log2m(a);
    printf("O logaritmo em base 2 e igual a %d",b);

    return 0;
}
