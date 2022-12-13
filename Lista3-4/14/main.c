#include <stdio.h>
#include <stdlib.h>


int busca_sequencial(int v[], int ind, int elem)
{
  if (v[ind]==elem&&ind>=0) return 1;
  if (v[ind]!=elem) busca_sequencial(v, ind-1, elem);
  else return 0;
}

int main()
{
    int v[5]={1,2,3,4,5};
    int a=4, b=1;
    printf("%d\n", busca_sequencial(v, a, b));
    return 0;
}
