#include <stdio.h>
#include <stdlib.h>

int somatorio(int x)
{
    if(x==0) return 0;
    else return x+somatorio(x-1);
}

int main()
{
    int a,c;
    printf("Escreba um numero\n");
    scanf("%d",&a);
    c=somatorio(a);
    printf(" O somatorio do numero e igual a %d",c);
    return 0;
}
