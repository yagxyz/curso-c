#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nota1, nota2, nota3, nota4, media;
    char cond1[10]="aprovado", cond2[10]="reprovado";

printf("Digite nota1");
    scanf("%f", &nota1);

      printf("Digite nota2");
    scanf("%f", &nota2);

      printf("Digite nota3");
    scanf("%f", &nota3);

      printf("Digite nota4");
    scanf("%f", &nota4);

    media=(nota1+nota2+nota3+nota4)/4;

   printf("Amedia do aluno e %f ", media);


    if (media>=7){

        printf("%s\n", cond1);
    }
         else
                printf("%s \n", cond2);

                    return 0;
}



