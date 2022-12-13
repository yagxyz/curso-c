#include <stdio.h>
#include <stdlib.h>


int  busca_binaria(int v[], int ini, int fim, int elem)
{
  int m = (ini + fim) / 2;
    if (ini > fim) return 0;
    if (elem == v[m]) return 1;
    if (elem < v[m])
       return busca_binaria(v, ini, m-1, elem);
    else
       return busca_binaria(v, m+1, fim, elem);
}

int main()
{
    int v[5]={1,2,3,4,5};
    int a=0, b=4, c=3;
    printf("%d\n", busca_binaria(v, a, b, c));
    return 0;
}
