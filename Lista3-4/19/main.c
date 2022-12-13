#include <stdio.h>
#include <stdlib.h>


int palindromo(int v[], int ini, int fim)
{
  if (fim<=1) return 1;
  if (v[ini]==v[fim])
  return palindromo(v, ini+1, fim-1);
  else return 0;
}

int main()
{
    int v[5]={2,3,2,3,2};
    int a=0, b=4;
    printf("%d\n", palindromo(v, a, b));
    return 0;
}
