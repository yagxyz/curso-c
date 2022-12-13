#include <stdio.h>
#include <stdlib.h>

int primos(int n){
    int i, k, div=0, qp=0;
    for (i=2; i<=n; i++){
        for(k=1; k<=i; k++){
            if(i%k==0){div++;}
        }
        if(div<=2){qp++;}
        div=0;
    }
    return qp;
}

int main()
{
    int n, qp;
    printf("Digite o número: \n");
    scanf("%d", &n);
    qp = primos(n);
    printf("Ha %d primos no intervalo [2, %d].", qp, n);
    return 0;
}
