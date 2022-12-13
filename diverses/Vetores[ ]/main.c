#include <stdio.h>
int main ()
{
int x, soma=0, subtracao=0, mult=1, vet[10]; //vetor do tipo inteiro com 50 posições

//inserindo valores no vetor
for (x=0;x<10;x++) {
//no vetor vet na posicao x (vet[x])...
//...colocar o valor da variavel x
vet[x] = x + 1;
}

//Imprimindo os valores do vetor
for (x=0;x<10;x++) {
printf("vet[%d] = %d\n", x, vet[x]);
}

//Somando os valores do vetor
for (x=0;x<10;x++) {
soma = soma + vet[x];
subtracao = subtracao - vet[x];
mult = mult * vet[x];
}

//imprimindo a soma
printf("Soma = %d\n", soma);
printf("Subtracao = %d\n", subtracao);
printf("Multiplicacao = %d\n", mult);

}
