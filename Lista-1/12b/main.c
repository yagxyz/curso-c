#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;

    printf("Escreva um numero\n");

    scanf("%d", &a);

    if ((a%3==0)&&(a%7==0)){

        printf ("O numero divisivel por 7 e 3");
    }

        else

            printf ("O numero indivisivel por 7 e 3 " );


    return 0;
}
