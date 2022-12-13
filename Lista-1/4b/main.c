#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;

    printf("Digite um numero");
    scanf("%d", &a);

    if ((a%2==0)&&(a!=0)){

        printf("O numero e par");
            }
           else if (a%2!=0)
            {
                printf("O numero e impar");
            }

            else if (a==0)
            {
                printf("O numero =0");
            }

            else
                    return 0;
}
