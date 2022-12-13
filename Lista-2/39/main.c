#include <stdio.h>
#include <string.h>

int palind;
int palindromo(int x)
{

    palind=0;
    char y[1000];
    sprintf(y,"%d",x);
    int i;
    for(i=0;i<strlen(y);++i)
    {
        y[i]==y[strlen(y)-1-i]?++palind:0;
    }
    palind==strlen(y)?palind=1:palind!=strlen(y)?palind=0:0;
    return palind;
}
int main()
{
    int a;
    printf("\nDigite um numero: ");
    scanf("%d", &a);
    int palindromo(int x);
    palind=palindromo(a);
    switch(palind)
    {
    case 1:
        printf("\nO numero e palindromo --> %d\n", palind);
        break;
    case 0:
        printf("\nO numero nao e palindromo --> %d\n", palind);
    }
    return 0;
}

