#include <stdio.h>
#include <stdlib.h>

int soma(int a,int b)
{
    if(b==0) return a;
    else return soma(a+1,b-1);
}

int main()
{
    int a,b,c;
    printf("Escreba dois numeros a,b \n");
    scanf("%d,%d",&a,&b);
    c=soma(a,b);
    printf(" A soma destes numeros e igual a %d",c);
    return 0;
}
