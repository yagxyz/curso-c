#include <stdio.h>
#include <string.h>

int palavras;
int main()
{
    char a[10000];
    printf("Digite um texto: ");
    scanf("%[^\n]s", a);
    int palavras_5_letras(char x[]);
    palavras=palavras_5_letras(a);
    printf("\n O texto tem %d palavras com 5 letras ou mais.\n",palavras);
    return 0;
}
int palavras_5_letras(char x[])
{
    palavras=0;
    int i, k;
    for(i=0,k=0;i<strlen(x);++i)
    {
        x[i]=='\ '||x[i]==','||x[i]=='.'?(k>=5?++palavras:0),k=0:(x[i]!='\ '||x[i]!=','||x[i]!='.'?++k:0);
    }
    return palavras;
}
