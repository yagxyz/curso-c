#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

float a, b;
float pi=3.1415;
float c;

printf("Digite a altura em 'cm'\n");
scanf("%f", &a);
printf("Digite o raio em 'cm'\n");
scanf("%f", &b);

c=pi*(b*b)*a;

    printf("O valumen da lata de oleo = %f cm-quadrados \n", c);
    return 0;
}
