#include <stdio.h>
#include <conio.h>

int main()
{
    float Salario, SalarioNovo;
    float a=0.75;
    printf("Digite seu Salario \n");
    scanf("%f", &Salario);

    SalarioNovo=Salario*a;

    printf("Seu novo salario=%f", SalarioNovo);
    return 0;
}

