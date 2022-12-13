#include <stdio.h>
#include <stdlib.h>

int fatorial(int x)
{
    if(x==1) return x;
    return x*fatorial(x-1);
}

int main()
{
    int a,c;
    printf("Escreba um numero\n");
    scanf("%d",&a);
    c=fatorial(a);
    printf(" O fatorial do numero e igual a %d",c);
    return 0;
}
