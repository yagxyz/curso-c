#include <stdio.h>
#include <string.h>

int morseCode;
int main()
{
    int a;
    printf("\nDigite um numero: ");
    scanf("%d", &a);
    int morse(int x);
    morseCode=morse(a);
    printf("\nO ponto (.) aparece %d vezes no numero %d em codigo Morse.\n", morseCode,a);
    return 0;
}
int morse(int x)
{
    int i;
    char k[1000];
    sprintf(k,"%d",x);
    x=0;
    for(i=0;i<strlen(k);++i)
    {
        k[i]=='1'?x=x+1:0;
        k[i]=='2'?x+=2:0;
        k[i]=='3'?x+=3:0;
        k[i]=='4'?x+=4:0;
        k[i]=='5'?x+=5:0;
        k[i]=='6'?x+=4:0;
        k[i]=='7'?x+=3:0;
        k[i]=='8'?x+=2:0;
        k[i]=='9'?x+=1:0;
    }
    morseCode=x;
    return morseCode;
}
