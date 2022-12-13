#include <stdio.h>
#include <conio.h>

int main()
{
    float Salario, SalarioNovo;
    float a,b;
    printf("Digite seu Salario \n");
    scanf("%f", &Salario);
    printf("Digite o porcentual de ajuste\n");
    scanf("%f", &a);

a=a/100;
b=1-a;
    SalarioNovo=Salario*b;

    printf("Seu novo salario=%f", SalarioNovo);
    return 0;
}
