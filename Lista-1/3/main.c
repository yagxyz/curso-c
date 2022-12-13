#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nota1, nota2, nota3;
    float media;

    printf("Digite a primeira nota\n");
    scanf("%f", &nota1);
    printf("Digite a primeira nota\n");
    scanf("%f", &nota2);
    printf("Digite a primeira nota\n");
    scanf("%f", &nota3);

    media=(nota1+nota2+nota3)/3;

    printf("A média aritmetica=%f",media);
    return 0;
}
