#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b ,c;
    printf("Digite um numero");
    scanf("%d", &a);


    printf("Digite um numero");
    scanf("%d", &b);


    printf("Digite um numero");
    scanf("%d", &c);



    if ((a>=b)&&(b>=c)){
printf("o numero maior = %d", a);

    }

    else

        if (b>=c)
    {
    printf("o numero maior = %d", b);
    }

    else

        if (b<=c)
    {
        printf("o numero maoir =%d", c);
    }
    else

return 0;
}
