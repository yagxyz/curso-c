#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int anagrama(char p1[], char p2[])
{
    int cont[256], cont2[256], i, flag = 1;

    for (i = 0; i < 256; i++)	            //zera o vetor que conta as letras da primeira palavra
        cont[i] = 0;
    for (i = 0; i < 256; i++)	            //zera o vetor que conta as letras da segunda palavra
        cont2[i] = 0;

    for (i = 0; p1[i] != '\0'; i++) {	    //percorre a primeira palavra
        cont[p1[i]]++;					    //conta quantas vezes cada letra da palavra aparece
    }
    for (i = 0; p2[i] != '\0'; i++) {		//percorre a segunda palavra
        cont2[p2[i]]++;						// conta quantas vezes cada letra da palavra aparece
    }

    for (i = 0; i < 256; i++) {				//percorre o vetor que conta letras
        if (cont[i] != cont2[i])	       // se o numero de vezes que uma letra ocorre na palavra 1 eh diferente da palavra 2 flag recebe1
            flag = 0;				        // significa que não são anagramas
    }

    if (flag == 1)
        printf("As palavras %s e %s sao anagramas\n", p1, p2);
    else
        printf("As palavras %s e %s nao sao anagramas\n", p1, p2);

    return flag;
}



int main()
{

char p1[30], p2[30];
int resultado;

scanf("%s %s", p1, p2);
resultado = anagrama(p1, p2);

return 0;
}



