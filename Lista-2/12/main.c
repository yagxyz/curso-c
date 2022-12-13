#include <stdio.h>
#include <stdlib.h>


int fatorial(int n)
{
    int f, i;
    f = 1;
    for (i=1; i<=n; i++){
        f = f*i;
    }
    return f;
}

int main()
{
    int n, f;
    scanf("%d", &n);
    f = fatorial(n);
    printf("O fatorial é %d.", f);
    return 0;
}

