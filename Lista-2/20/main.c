#include <stdio.h>
#include <stdlib.h>

int primo(int n)
{
    int div=0, r, i, k;

    for (i=1;i<=n;i++){

        for (k=1; k<=i; k++){
            if(i%k==0){
            div = div+1;
            }
        }

        if (div<=2){
            r = i;
        }

        div = 0;
    }

    return r;
}


int main()
{
    int n, r;
    scanf("%d", &n);
    r = primo(n);
    printf("O maior numero primo menor ou igual a %d e %d.", n, r);
    return 0;
}

