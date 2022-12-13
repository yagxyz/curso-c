#include <stdio.h>
#include <stdlib.h>


int potencia(int b, int e)
{
    int p = 1;
    int i;
    for (i=1; i<=e; i++){
        p = p*b;
    }
    printf("%d^%d=%d\n", b, e, p);
    return p;
}

int main()
{
    int b, e, p;
    while(1){
    scanf("%d, %d", &b, &e);
    p = potencia(b, e);
    }
    return 0;
}

