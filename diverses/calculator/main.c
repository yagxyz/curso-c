#include <stdio.h>
#include <math.h>


void SOMA(float a, float b)
{
    float result;

    result = a+b;
    printf("soma = %f \n", result);
}
void MULT(float a, float b)
{
    float result;

    result = a*b;
    printf("multiplicação = %f \n", result);
}
void DIV(float a, float b)
{
    float result;

    result = a/b;
    printf("divisão = %f \n", result);
}
void RES(float a, float b)
{
    float result;

    result = a-b;
    printf("resta = %f \n", result);
}

int main()
{
    float x;
    float y;
    char c;

    printf("Escrever um numero\n");

    scanf("%f", &x);


    printf("Escreva outro numero\n");

    scanf("%f%*c", &y);

    printf("Escolha a operacao: + (soma), * (multiplicacao), / (divisao), r (resto)\n ");
    printf("                    p (Porcentagem), s (seno), c (coseno)");

    scanf("%c%*c", &c);

    /*printf(" Digite a letra referende ao operador desejado s, r, m ou d \n");

    scanf("%c", &s);

     scanf("%c", &r);

      scanf("%c", &m);

       scanf("%c", &d);

    system("PAUSE");*/
switch(c)
{
case '+':
    SOMA(x,y);
    break;
case '*':
    MULT(x,y);
    break;
case '/':
    DIV(x,y);
    break;
case 'r':
    RES(x,y);
    break;
default:
    printf("operacao invalida\n");
}

//    SOMA(x,y);
//
//
//    MULT(x,y);
//
//
//    DIV(x,y);
//
//
//    RES(x,y);// Chamada da função SOMA(12.3,10);


    return 0;
}
