#include <stdio.h>
#include <stdlib.h>

int main()
{

int a,b,r,s,m;

printf("Escreva dois numeros enteiros\n");

scanf("%d%d", &a,&b);

s=a+b;
r=a-b;
m=a*b;


    printf("%d+%d=%d\n", a,b,s);
    printf("%d-%d=%d\n", a,b,r);
    printf("%d*%d=%d\n", a,b,m);
    return 0;
}
