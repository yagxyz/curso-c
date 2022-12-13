#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a;

    printf("Escreva um numero\n");

    scanf("%f", &a);

    if (a<0){

        a= pow(a,2);
        printf ("O numero = %f", a);
    }

        else if(a>=0)
        {
            a= pow(a,1.0/2.0);
            printf ("O numero = %f", a);
        }

    return 0;
}
