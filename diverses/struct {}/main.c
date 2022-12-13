//#include <stdio.h>
//#include <conio.h>
//
//int main(void)
//{
//  /*Criando a struct  */
//  struct ficha_de_aluno
//  {
//    char nome[50];
//    char disciplina[30];
//    float nota_prova1;
//    float nota_prova2;
//  };
//
//   /*Criando a variável aluno que será do
//     tipo struct ficha_de_aluno       */
//  struct ficha_de_aluno aluno;
//
//  printf("\n---------- Cadastro de aluno -----------\n\n\n");
//
//  printf("Nome do aluno ......: ");
//  fflush(stdin);
//
//  /*usaremos o comando fgets() para ler strings, no caso o nome
//   do aluno e a disciplina
//   fgets(variavel, tamanho da string, entrada)
//   como estamos lendo do teclado a entrada é stdin (entrada padrão),
//   porém em outro caso, a entrada tambem poderia ser um arquivo  */
//
//  fgets(aluno.nome, 40, stdin);
//
//  printf("Disciplina ......: ");
//  fflush(stdin);
//  fgets(aluno.disciplina, 40, stdin);
//
//  printf("Informe a 1a. nota ..: ");
//  scanf("%f", &aluno.nota_prova1);
//
//  printf("Informe a 2a. nota ..: ");
//  scanf("%f", &aluno.nota_prova2);
//
//  printf("\n\n --------- Lendo os dados da struct ---------\n\n");
//  printf("Nome ...........: %s", aluno.nome);
//  printf("Disciplina .....: %s", aluno.disciplina);
//  printf("Nota da Prova 1 ...: %.2f\n" , aluno.nota_prova1);
//  printf("Nota da Prova 2 ...: %.2f\n" , aluno.nota_prova2);
//
//  getch();
//  return(0);
//}


#include <stdio.h>

typedef struct // Cria uma STRUCT para armazenar os dados de uma pessoa
{
    float Peso;   // define o campo Peso
    int Idade;    // define o campo Idade
    float Altura; // define o campo Altura
} Pessoa; // Define o nome do novo tipo criado

void ImprimePessoa(Pessoa P) // declara o parâmetro como uma struct
{
  printf("Idade: %d  Peso: %f Altura: %f\n", P.Idade, P.Peso, P.Altura);
}

int main()
{
    Pessoa Joao, P2;
    Pessoa Povo[10];

    Joao.Idade = 15;
    Joao.Peso = 60.5;
    Joao.Altura = 1.75;

    Povo[4].Idade = 23;
    Povo[4].Peso = 75.3;
    Povo[4].Altura = 1.89;

    P2 = Povo[4];
           P2.Idade++;

    // chama a função que recebe a struct como parâmetro
    ImprimePessoa(Joao);
    ImprimePessoa(Povo[4]);
    ImprimePessoa(P2);
   return 0;
}
