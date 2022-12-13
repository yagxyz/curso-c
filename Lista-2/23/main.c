#include <stdio.h>
#include <stdlib.h>

int ocorrencias(int v[], int n, int x){
    int i, o;
    for (i=0; i<n; i++){
        if (v[i]==x){
            o++;
        }
    }
    return o;
}

int main()
{
    int n, x, i, o;
    printf("Número de elementos do vetor: \n");
    scanf("%d", &n);
    int v[n];
    printf("Vetor: \n");
    for (i=0; i<n; i++){scanf("%d", &v[i]);}
    for (i=0; i<n; i++){printf("%d", v[i]);}
    printf("Elemento: \n");
    scanf("%d", &x);
    o = ocorrencias(v, n, x);
    printf("%d aparece no vetor %d vezes", x, o);
    return 0;
}

