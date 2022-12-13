#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main()
{
    int x=1;
    while(x==1)
    {
    int n=1, numero_secreto=1,k=0,i=1;
    srand(time(NULL));
    printf("\nVamos Jogar?\n\nDigite o numero maximo para o jogo: ");
    while(n==1){
    scanf("%d", &n);
    n==1?printf("\nNumero invalido. Digite outro numero: "):0;
    }
    numero_secreto=rand()%(n)+1;
    n=n+1;
    printf("\nAdivinhe o numero que escolhi: ");
    k=ceil(log2(n));
    for(i=1;i<=k&&n!=numero_secreto;++i)
    {
        scanf("%d", &n);
        n!=numero_secreto&&i!=k?(
                n>numero_secreto?
                    (printf("\nEscolhi um numero menor. \nTente novamente! Voce tem mais %d tentativas: ",k-i)):
                    (printf("\nEscolhi um numero maior. \nTente novamente! Voce tem mais %d tentativas: ",k-i))):0;
    }
    n==numero_secreto?printf("\n\nMuito bem! Voce acertou!")
    :(n!=numero_secreto?printf("\nVoce perdeu! O numero era %d",numero_secreto):0);
    printf("\n\nDeseja jogar novamente?\n\n\nSim=1  Nao=2\n\n---> ");
    scanf("%d",&x);
    x==1?system("cls"):0;
    }
    printf("\nObrigado por jogar! Volte Sempre!\n");
    return 0;
}
