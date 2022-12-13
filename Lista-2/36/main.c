#include <stdio.h>
#include <string.h>
#include <math.h>

int decimal;
int main()
{
    char binary[1000];
    printf("\nDigite o numero binario que deseja converter: ");
    scanf("%s", binary);
    int decimal_binario(char x[]);
    decimal=decimal_binario(binary);
    printf("\nO numero em forma decimal e: %d\n",decimal);
    return 0;
}
int decimal_binario(char x[])
{
    decimal=0;
    int i;
    for(i=strlen(x);i>0;--i)
    {
        int z=pow(2,strlen(x)-i);
        x[i-1]=='1'?decimal+=pow(2,(strlen(x)-i)):0;
    }
    return decimal;
}
