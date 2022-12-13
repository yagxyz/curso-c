#include <stdio.h>

int valido;
int main()
{
    int a, b, c;
    printf("\nDigite uma data:\n\ndia: ");
    scanf("%d", &a);
    printf("\nmes: ");
    scanf("%d", &b);
    printf("\nano: ");
    scanf("%d", &c);
    int data_valida(int dia, int mes, int ano);
    valido=data_valida(a,b,c);
    switch(valido)
    {
    case 1:
        printf("\nData valida --> %d\n", valido);
        break;
    case 0:
        printf("\nData invalida --> %d\n", valido);
    }
    return 0;
}
int data_valida(int dia, int mes, int ano)
{
    valido=0;
    ano<2100&&ano>0&&mes>0&&mes<13&&dia>0&&dia<32?(
    (mes==1||mes==3||mes==5||mes==7||mes==8||mes==10||mes==12)&&(dia>0&&dia<32)?valido=1:(
    mes!=2&&dia>0&&dia<31?valido=1:(
    mes==2&&dia>0&&dia<29?valido=1:(
    mes==2&&dia==29&&(ano%4==0&&(ano%100!=0||ano%400==0))?valido=1:0)))):0;
    return valido;
}
