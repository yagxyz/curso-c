#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int palindromo(char p[])
{
    int r = 1;
    int i = 0;
    int k = strlen(p)-1;

    while (i<=k){
        if (p[i] != p[k]){

            r = 0;
        }
    i++;
    k--;

    }
    return r;
}

int main()
{
    int r;
    char p[100];

    scanf("%s", p);


    r=palindromo(p);
    switch (r)
    {
    case 1: printf(" Palindromo.\n", p);
    break;
    case 0: printf(" nao e um palindromo.\n", p);
    break;
    }
    return 0;
}

