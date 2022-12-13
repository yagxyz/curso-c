#include <stdio.h>
#include <string.h>

int str;
int main()
{
    char a[100],b[100];
    printf("Digite um codigo binario para o vetor a: \n");
    scanf("%s%*c", a);
    printf("Digite outro codigo binario para o vetor b: \n");
    scanf("%s%*c", b);
    int substring(char x[],char y[]);
    str=substring(a,b);
    strlen(a)>strlen(b)?str=substring(b,a):0;
    printf("\nO menor vetor aparece %d vezes no maior.\n", str);
    return 0;
}
int substring(char x[], char y[])
{
    str=0;
    for(int i=0,z=i;i<strlen(y);++i,z=i)
    {
        int j=0;
        for(;y[i]==x[j]&&j<strlen(x)-1;j++)
        {
            y[i]==x[j]?++i:0;
        }
        y[i]==x[j]?str+=1:0;
        i=z;
    }
    return str;
}

