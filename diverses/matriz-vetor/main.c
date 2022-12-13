#include <stdio.h>
#include <stdlib.h>



void imprimirmatriz(int v[], int m, int n)
{
int l, c;
for (l=0; l<m; l++)
{
for(c=0; c<n; c++)
{
printf("%5d", v[l*n+c]);
}
printf("\n");
}
printf("\n");
}

int mdiagonal(int v[], int n)
{
int l, c;
for(l=0;l<n;l++)
{
for(c=0; c<n; c++)
{
if((l!=c)&&(v[l*n+c]!=0))
{
return 0;
}
}
}
return 1;
}

int main()
{
int vetor[]={1,0,0,0,6,0,0,0,3}, r;
imprimirmatriz(vetor, 3,3);
r=mdiagonal(vetor, 3);
if(r) printf("diagonal\n");
else printf("nao diagonal\n");

return 0;
}
