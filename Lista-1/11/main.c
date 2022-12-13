
#include<stdio.h>
#include<stdlib.h>

int main ()

{
int a=0, b, c;

printf("Escreva um numero enteiro");
scanf("%d", &b);

while(a<=10)
{

c=b*a;

printf("%d veces %d= %d\n", b, a, c);

 a++;

}
return 0;
}
