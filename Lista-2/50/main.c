#include <stdio.h>

int result;
int main()
{
    char a[10],b[10];
    printf("\nDigite a escolha do primeiro jogador: ");
    scanf("%s", a);
    printf("\nDigite a escolha do segundo jogador: ");
    scanf("%s", b);
    int pptls(char x[], char y[]);
    result=pptls(a,b);
    switch(result)
    {
    case 0:
        printf("\nJogo empatado.\n");
        break;
    case 1:
        printf("\nO primeiro jogador venceu.\n");
        break;
    case 2:
        printf("\nO segundo jogador venceu.\n");
    }
    return 0;
}
int pptls(char x[], char y[])
{
    int result=0;
    stricmp(x, "pedra")==0?(stricmp(y, "papel")==0||stricmp(y, "spock")==0?result=2:(stricmp(y, "tesoura")==0||stricmp(y, "lagarto")==0?result=1:0)):0;
    stricmp(x, "papel")==0?(stricmp(y, "tesoura")==0||stricmp(y, "lagarto")==0?result=2:(stricmp(y, "pedra")==0||stricmp(y, "spock")==0?result=1:0)):0;
    stricmp(x, "tesoura")==0?(stricmp(y, "spock")==0||stricmp(y, "pedra")==0?result=2:(stricmp(y, "papel")==0||stricmp(y, "lagarto")==0?result=1:0)):0;
    stricmp(x, "lagarto")==0?(stricmp(y, "tesoura")==0||stricmp(y, "pedra")==0?result=2:(stricmp(y, "papel")==0||stricmp(y, "spock")==0?result=1:0)):0;
    stricmp(x, "spock")==0?(stricmp(y, "papel")==0||stricmp(y, "lagarto")==0?result=2:(stricmp(y, "pedra")==0||stricmp(y, "tesoura")==0?result=1:0)):0;
    return result;
}

