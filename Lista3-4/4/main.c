#include <stdio.h>
#include <stdlib.h>

int mult(int a,int b)
{
    if(b==0) return 0;
    else if (b==1) return a;
    else return a + mult(a,b-1);
}

int main()
{
    int a,b,c;
    printf("Escreba dois numeros a,b \n");
    scanf("%d,%d",&a,&b);
    c=mult(a,b);
    printf(" A multiplicacao deles e igual a %d",c);
    return 0;
}
