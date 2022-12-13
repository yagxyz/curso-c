#include <stdio.h>
#include <stdlib.h>

int max(int v[],int n)
{
    int x;
   if (n==1)return v[0];
   else x = max(v, n-1);
      if (x > v[n-1]) return x;
   else return v[n-1];

}

int main()
{
    int v[5]={1,7,3,4,5};
    int a=5;
    printf("%d\n", max(v, a));
    return 0;
}
