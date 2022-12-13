#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int lado;
int main()
{
    int n;
    printf("\nDigite o numero de lados do dado virtual: ");
    scanf("%d", &n);
    int dado_virtual(int x);
    lado=dado_virtual(n);
    printf("\nO dado caiu no numero %d\n", lado);
    return 0;
}
int dado_virtual(int x)
{
    srand(time(NULL));
    lado=rand()%x;
    return lado+1;
}
