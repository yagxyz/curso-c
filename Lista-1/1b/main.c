#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("Digite um numero\n");
    scanf("%i", &a);

    if (a>20){
        printf("%i", a);
    }
    else
        printf("Numero menor que 20\n");
    return 0;
}
