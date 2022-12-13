#include<stdio.h>
int main(void)
{
  float nota1,nota2,media;
  char resp;

  do
  {

    printf("Digite a primeira nota: ");
    scanf("%f",&nota1);
    printf("Digite a segunda nota: ");
    scanf("%f",&nota2);

    media = (nota1 + nota2)/2;
    printf("Media do aluno = %f\n",media);

    printf("Digite 'c' para continuar ou 'n' para sair\n");
    scanf(" %s", &resp);

  }while (resp=='c');

  return 0;
}
