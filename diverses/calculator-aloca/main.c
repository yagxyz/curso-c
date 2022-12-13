#include <stdio.h>
#include <stdlib.h>

#define ACII_SUM 43  // +
#define ACII_SUB 45  // -
#define ACII_DIV 47  // /
#define ACII_MUL 42  // *
#define ACII_C   99  // c
#define ACII_I   105 // c
#define ACII_L   108 // l

//https://pt.wikipedia.org/wiki/ASCII

void MostraHistorico(char **, int);
void somar(float *, float *, float *);
void subtrair(float *, float *, float *);
void dividir(float *, float *, float *);
void multiplicar(float *, float *, float *);

int main()
{
    char **hist_calc = NULL;
    int tamanho_hist = 0;
    int max_char = 100;

    float num1 = 0;
    float num2 = 0;
    float result = 0;
    char operacao1;
    int operacao2 = 0;

    float *pnum1 = NULL;
    float *pnum2 = NULL;
    float *presult = NULL;

    pnum1 = &num1;
    pnum2 = &num2;
    presult = &result;

    int laco = 1;

    while (laco == 1){

        printf("Informe o primeiro valor: ");
        scanf("%f", pnum1);

        printf("Informe o operador (+), (-), (/), (*): ");
        scanf("%s", &operacao1);

        printf("Informe o segundo valor: ");
        scanf("%f", pnum2);

        printf("\n===============\n");
        printf("Operacao: (%f)", *pnum1);
        printf(" (%c) ", operacao1);
        printf("(%f)", *pnum2);

        operacao2 = operacao1;

        switch (operacao2){
            case ACII_SUM : somar(pnum1, pnum2, presult); break;       // +
            case ACII_SUB : subtrair(pnum1, pnum2, presult); break;    // -
            case ACII_DIV : dividir(pnum1, pnum2, presult); break;     // /
            case ACII_MUL : multiplicar(pnum1, pnum2, presult); break; // *
            default :  printf("\nOperador Informado Invalido !");
        }

        printf("\nResultado: %f", *presult);
        printf("\n===============");

    //char **hist_calc = NULL;
    //int tamanho_hist = 0;
    //int max_char = 100;

        tamanho_hist++;
        hist_calc = realloc(hist_calc, tamanho_hist * sizeof(char*));

        *(hist_calc + (tamanho_hist - 1)) = malloc(max_char * sizeof(char));

        int n = sprintf(*(hist_calc + (tamanho_hist - 1)),
                        "Operacao %d: %f  %c  %f %f",
                        tamanho_hist, *pnum1, operacao1, *pnum2, result);

        printf("\nPressione: ");
        printf("\n (i) para ver o historico \n (l) para limpar o historico \n (c) para continuar \n ou outra tecla para sair: ");

        scanf("%s", &operacao1);

        if (operacao1 == 'c') //c
        {
            system("cls");
        }else if (operacao1 == 'i') //i
        {
            MostraHistorico(hist_calc, tamanho_hist);
            system("pause");
            system("cls");
        }else if (operacao1 == 'l') //l
        {
            free(hist_calc);
            hist_calc = NULL;
            tamanho_hist = 0;
            printf("\nHistorico limpado...\n");
            system("pause");
            system("cls");
        }else
            laco = 0;
    }

}

void MostraHistorico(char **phist_calc, int tamanho_hist)
{
    printf("\n====Historico Calculadora=========\n");
    for(int i = 0; i<tamanho_hist; i++){
        printf("%s\n", phist_calc[i]);
    }
    printf("==================================\n");
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

