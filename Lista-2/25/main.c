#include <stdio.h>
#include <stdlib.h>

int max(int v[], int n){
    int i, maior=v[0];
    for(i=0; i<n; i++){
        if(v[i]>maior){
            maior = v[i];
        }
    }
    return maior;
}

int main()
{
    int n, i, maior;
    printf("Número de elementos do vetor: \n");
    scanf("%d", &n);
    int v[n];
    printf("Vetor: \n");
    for (i=0; i<n; i++){scanf("%d", &v[i]);}
    maior = max(v, n);
    printf("O maior elemento do vetor é %d.", maior);
    return 0;
}
