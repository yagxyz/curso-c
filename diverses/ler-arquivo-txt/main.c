#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    typedef struct pessoa {
        int id;
        char nome[50];
        char cpf[50];
        char rg[50];
        char sexo[2];
        int idade;
        float peso;
        float altura;
        float imc;
        char email[70];

    } Pessoa;

	Pessoa **Pessoas = NULL;
	int count_pessoas=0;

    int pid;
    char pnome[50];
    char pcpf[50];
    char prg[50];
    char psexo[2];
    int pidade;
    float ppeso;
    float paltura;
    float pimc;
    char pemail[70];

	char url[]="cadastros - Copy (2) - Copy.txt";

	FILE *arq;

	arq = fopen(url, "r");

	if(arq == NULL)
        printf("Erro, nao foi possivel abrir o arquivo\n");
	else {
                           //1 Joaquim 06751538098 2068694522 m 23 60 1.75 3.5 joaquim@gmail.com
        while((fscanf(arq,"%d %s %s %s %s %d %f %f %f %s\n", &pid, pnome, pcpf, prg, psexo, &pidade, &ppeso, &paltura, &pimc, pemail)) != EOF ){

            count_pessoas++;
            Pessoas = realloc(Pessoas, count_pessoas * sizeof(Pessoa*));
            Pessoas[count_pessoas - 1] = malloc(sizeof(Pessoa));

            Pessoas[count_pessoas - 1]->id = pid;

            (Pessoa + count_pessoas - 1).id = pid;

            Pessoas[count_pessoas - 1]->id = pid;
            sprintf(Pessoas[count_pessoas - 1]->nome, pnome);
            sprintf(Pessoas[count_pessoas - 1]->cpf, pcpf);
            sprintf(Pessoas[count_pessoas - 1]->rg, prg);
            sprintf(Pessoas[count_pessoas - 1]->sexo, psexo);
            Pessoas[count_pessoas - 1]->idade = pidade;
            Pessoas[count_pessoas - 1]->peso = pidade;
            Pessoas[count_pessoas - 1]->altura = paltura;
            Pessoas[count_pessoas - 1]->imc = pimc;
            sprintf(Pessoas[count_pessoas - 1]->email, pemail);

        }
	}

	fclose(arq);

	printf("=============Imprime Cadastros=================\n");

	for (int i=0; i<count_pessoas; i++){

        printf("id......: %d\n", Pessoas[i]->id);
        printf("nome....: %s\n", Pessoas[i]->nome);
        printf("cpf.....: %s\n", Pessoas[i]->cpf);
        printf("rg......: %s\n", Pessoas[i]->rg);
        printf("sexo....: %s\n", Pessoas[i]->sexo);
        printf("idade...: %d\n", Pessoas[i]->idade);
        printf("peso....: %f\n", Pessoas[i]->peso);
        printf("altura..: %f\n", Pessoas[i]->altura);
        printf("imc.....: %f\n", Pessoas[i]->imc);
        printf("email...: %s\n", Pessoas[i]->email);

        printf("\n");

	}


	return 0;
}
