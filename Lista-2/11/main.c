#include <stdio.h>
#include <stdlib.h>

int divisores(int n)
{
    int divs = 0;
    int i;
    for (i=2; i<=n; i++){
        if (n%i==0){
            divs++;
        }
    }
    printf("Há %d divisores de %d entre 2 e %d./n", divs, n, n);
    return divs;
}

int main()
{
    int n, divs;
    scanf("%d", &n);
    divs = divisores(n);
    return 0;
}


