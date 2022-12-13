#include<stdio.h>

int main(){

int a;
 int b;
 printf("digite a,b para calcular mdc(a,b):");
scanf("%d %d", &a, &b);

while(a!=b)
    {
        printf("a=%d,b=%d/n",a,b);
    if (a>b)
        {
        a=a-b;

    }
    else
    {
b=b-a;
    }
}
printf("a mdc(a,b)=%d",a);
return 0;
}
