#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;


    printf("Digite um nuemero");
    scanf("%d", &a);


    printf("Digite um nuemero");
    scanf("%d", &b);

    if(a>b){

        printf("o menor numro =%d", b);
            }
       if(a<b){

        printf("o menor numro =%d", a);

       }
       else printf("OS numeros s�o iguais");

    return 0;
}
