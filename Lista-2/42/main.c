#include <stdio.h>

char romano[20];
int main()
{
    int n=1;
    do
        {
            n<1||n>3999?printf("\nNumero invalido. Tente novamente.\n\n"),system("pause"),system("cls"):0;
            printf("Digite um numero de 1 a 3999: ");
            scanf("%d", &n);
        }
        while(n<1||n>3999);
    int algarismos_romanos(int x);
    romano[20]=algarismos_romanos(n);
    printf("\nO numero em romano e: %s\n", romano);
    return 0;
}
int algarismos_romanos(int x)
{
    int i;
    for(i=0;x>0;)
    {
        x/1000>=1?x-=1000,romano[i]='M',++i:0;
        x/1000>=1?x-=1000,romano[i]='M',++i:0;
        x/1000>=1?x-=1000,romano[i]='M',++i:0;
        x/900>=1?x-=900,romano[i]='C',++i,romano[i]='M',++i:0;
        x/500>=1?x-=500,romano[i]='D',++i:0;
        x/400>=1?x-=400,romano[i]='C',++i,romano[i]='D',++i:0;
        x/100>=1?x-=100,romano[i]='C',++i:0;
        x/100>=1?x-=100,romano[i]='C',++i:0;
        x/100>=1?x-=100,romano[i]='C',++i:0;
        x/90>=1?x-=90,romano[i]='X',++i,romano[i]='C',++i:0;
        x/50>=1?x-=50,romano[i]='L',++i:0;
        x/40>=1?x-=40,romano[i]='X',++i,romano[i]='L',++i:0;
        x/10>=1?x-=10,romano[i]='X',++i:0;
        x/10>=1?x-=10,romano[i]='X',++i:0;
        x/10>=1?x-=10,romano[i]='X',++i:0;
        x/9>=1?x-=9,romano[i]='I',++i,romano[i]='X',++i:0;
        x/5>=1?x-=5,romano[i]='V',++i:0;
        x/4>=1?x-=4,romano[i]='I',++i,romano[i]='V',++i:0;
        x/1>=1?x-=1,romano[i]='I',++i:0;
        x/1>=1?x-=1,romano[i]='I',++i:0;
        x/1>=1?x-=1,romano[i]='I',++i:0;
    }
    return romano;
}
