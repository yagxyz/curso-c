#include <stdio.h>
#include <stdlib.h>

int main()
{
    float h, p;
    char s;

    printf("Digite a altura da pessoa em metros\n");
    scanf("%f", &h);

    printf("Digite o sexo da pessoa 'm' mulher ou 'h' homen\n");
    scanf(" %s", &s);

    if (s=='m')
    {
        p=(62.1*h) - 44.7;
    }
    else if(s=='h')
    {
        p=(72.7*h) - 58;
    }
    printf("O pesso ideal da pessoa seria= %f KG\n", p);

    return 0;
}
