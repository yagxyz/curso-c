#include <stdio.h>
#include <stdlib.h>

int megasena(void)
{ int P, I, r;

    P=30;
    I=30;
    r=P*I*(P-1)*(I-1)*(P-2)*(I-2);
    return r;

}
int main()
{
    int a;
    a=megasena();

    printf("%d\n", a);
    return 0;
}
