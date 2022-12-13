#include <stdio.h>
#include <stdlib.h>

void quicksort (int v[], int p, int r)
{
   if (p < r) {

         int c = v[p], i = p+1, j = r, t;
   while (i <= j) {
      if (v[i] <= c) ++i;
      else if (c < v[j]) --j;
      else {
         t = v[i], v[i] = v[j], v[j] = t;
         ++i; --j;
      }
   }
   v[p] = v[j], v[j] = c;

      quicksort (v, p, j-1);
      quicksort (v, j+1, r);
   }
}


int main()
{
    int i;
    int v[5]={4,5,3,2,1};
    int a=0, b=4;

    for( i = 0 ; i <= b; i++)
  {
     printf("v[%d] = %d\n",i, v[i]);
  }
    printf("\n\n");

    quicksort(v, a, b);

    for( i = 0 ; i <= b; i++)
  {
     printf("v[%d] = %d\n",i, v[i]);
  }

    return 0;
}
