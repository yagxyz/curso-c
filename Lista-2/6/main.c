#include <stdio.h>
#include <stdlib.h>



int ano_bissexto(int ano)
{
    if ((ano%400==0)||((ano%4==0)&&(ano%100!=0))) {ano = 1;}
    else {ano = 0;}
    return ano;
}


int main()
{
    while(1){
    int ano;

    scanf("%d", &ano);
    ano = ano_bissexto(ano);
    printf("%d\n", ano);
    }

    return 0;
}

