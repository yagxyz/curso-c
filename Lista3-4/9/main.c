#include <stdio.h>
#include <stdlib.h>

int min(int v[],int n)
{
   int x;
   if (n==1)return v[0];
   else x = min(v, n-1);
      if (x < v[n-1]) return x;
   else return v[n-1];

}

int main()
{
    int v[5]={5,2,3,5,5};
    int a=5;
    printf("%d\n", min(v, a));
    return 0;
}
