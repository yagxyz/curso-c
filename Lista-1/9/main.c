#include <stdio.h>
#include <conio.h>

int main()
{
    float Salario, SalarioNovo;
    float G, I;

    printf("Digite seu Salario \n");
    scanf("%f", &Salario);

    G=Salario*0.05;//Calculo de gratificação
    I=Salario*0.27;//Calculo de Impostos

    Salario=Salario+G-I;//Novo salario com grat e impost

    SalarioNovo=Salario-Salario*0.1;//Calculo de salario menos previdencia

    printf("Seu salario=%f", SalarioNovo);
    return 0;
}
