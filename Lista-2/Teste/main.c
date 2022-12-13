#include <stdio.h>
#include <stdlib.h>

int testeA(int a,int b);
int testeB(int x[], int n, int c);

int testeA(int a,int b)
{
  int i;
  for (i=0;i<b;i+=b) a+=1;
  while(b<6) b++;
  if(a>6) return 6;
  else return a;

}

int testeB(int x[], int n, int c)
{
int i,s=c;
for (i=0;i<n;i++) s+=x[i];
return s;
}
int main ()
{
    int x=9,y=6,z=8, v[5]={0,0,0,2,3};
    x+=y+z+1;
    printf("%d\n", x);
    y+=z+1;
    printf("%d\n", y);
    z+=1;
    printf("%d\n", z);
    v[0]=x;
    v[1]=y;
    v[2]=z;
   z+=testeB(v,5,testeA(x,y));
   printf("%d",z);

    return 0;
}
