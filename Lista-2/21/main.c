#include <stdio.h>
#include <stdlib.h>


int ocorrencias(char s[], char c){
    int i, o=0;
    for (i=0; s[i]!='\0'; i++){
        if (s[i]==c){
            o = o+1;
        }
    }
    return o;
}

int main()
{
    char s[100], c;
    int o;
    scanf(" %s", s);
    scanf(" %c", &c);
    printf("%s", s);
    o = ocorrencias(s, c);
    printf("\nO número de ocorrências de %c em %s é %d.", c, s, o);
    return 0;
}

