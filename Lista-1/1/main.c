#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;

    printf("Escreba um numero enteiro:");

    scanf("%i", &a);

    b=a+1;
    c=a-1;

    printf("O sucesor deste numero=%i\n", b );
    printf("O antecesor deste numero=%i\n", c);
    return 0;
}
