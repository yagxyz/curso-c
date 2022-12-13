#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;

    printf("Digite um numero ");
    scanf("%d", &a);

    printf("Digite um numero ");
    scanf("%d", &b);


    if (a==b)
        {
            printf("Os numeros iguais");
        }

    else if (a>b)
        {
            printf("O primeiro maior que segundo");
        }

    else printf("O segundo maior que o primeiro");


    return 0;
}
