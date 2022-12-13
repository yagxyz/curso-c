#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h> //biblioteca para usar a função strlen

void minusculo(char *);

int main()
{
    char string[]="LOGICA DE PROGRAMACAO"; //cria string original em maiusculo
    char *pstring=NULL; //cria ponteiro
    pstring = &string; //cria apontamento para variavel string

    minusculo(pstring);

    printf("%s", pstring);

    return 0;
}

void minusculo(char *pstring){
    int i=0;

    while (*(pstring + i)){ //comparação nativa
    //while (i < strlen(pstring)){ //comparação usando a contagem do tamanho do array

        *(pstring + i) =  tolower(*(pstring + i)); //inverte de maiusculo pra minusculo

        i++; //incrementa o valor de i
    }

    return pstring;
}


