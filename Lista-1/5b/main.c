#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;

    printf("Digite um numero");
    scanf("%d", &a);

    if (a<0){

        printf("O numero e negativo");
            }
           else if (a>0)
            {
                printf("O numero e positivo");
            }

            else if (a==0)
            {
                printf("O numero e nulo");
            }

            else
                    return 0;
}
