#include <stdio.h>
#include <stdlib.h>

#define ACII_SUM 43 // +
#define ACII_SUB 45 // -
#define ACII_DIV 47 // /
#define ACII_MUL 42 // *
#define ACII_C   99 // c

//https://pt.wikipedia.org/wiki/ASCII

void somar(float *, float *, float *);
void subtrair(float *, float *, float *);
void dividir(float *, float *, float *);
void multiplicar(float *, float *, float *);

int main()
{
    float num1 = 0;
    float num2 = 0;
    float result = 0;
    char teste;
    int operacao = 0;

    float *pnum1 = NULL;
    float *pnum2 = NULL;
    float *presult = NULL;

    pnum1 = &num1;
    pnum2 = &num2;
    presult = &result;

    printf("Informe o primeiro valor: ");
    scanf("%f", pnum1);

    printf("Informe o operador (+), (-), (/), (*): ");
    scanf("%s", &teste);

    printf("Informe o segundo valor: ");
    scanf("%f", pnum2);

    printf("\n===============\n");
    printf("Operacao: (%f)", *pnum1);
    printf(" (%c) ", teste);
    printf("(%f)", *pnum2);

    operacao = teste;

    switch (operacao){
        case ACII_SUM : somar(pnum1, pnum2, presult); break;       // +
        case ACII_SUB : subtrair(pnum1, pnum2, presult); break;    // -
        case ACII_DIV : dividir(pnum1, pnum2, presult); break;     // /
        case ACII_MUL : multiplicar(pnum1, pnum2, presult); break; // *
        default :  printf("\nOperador Informado Invalido !");
    }

    printf("\nResultado: %f", result);
    printf("\n===============");

    printf("\nPressione c para continuar ou outra tecla para: ");

    scanf("%s", &teste);

    operacao = teste;

    if (operacao == ACII_C) //c
    {
        system("cls");
        main();
    }else
        exit(0);
}

void somar(float *num1, float *num2, float *result)
{
    *result =  *num1 + *num2;
}

void subtrair(float *num1, float *num2, float *result)
{
    *result =  *num1 - *num2;
}

void dividir(float *num1, float *num2, float *result)
{
    *result =  *num1 / *num2;
}

void multiplicar(float *num1, float *num2, float *result)
{
    *result =  *num1 * *num2;
}

