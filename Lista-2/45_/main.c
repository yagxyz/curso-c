#include <stdio.h>
#include <stdlib.h>

//l=[0,n-2]
//c=[l+1,n-1]

void imprimirmatriz(int v[], int m, int n)
{
int l, c;
for (l=0; l<m; l++)
{
for(c=l+1; c<n; c++)
{
printf("%5d", v[l*n+c]);
}
printf("\n");
}
printf("\n");
}

void imprimirmatrizsup(int v[], int n)
{
int l, c;
for (l=0; l<n; l++)
{
for(c=0; c<n; c++)
{
    if(c<l+1)
    {
    printf("      ");
    }
    else
    {
    printf("%5d", v[l*n+c]);
    }
}
printf("\n");
}
printf("\n");
}

void imprimirmatrizinf(int v[], int n)
{
int l, c;
for (l=0; l<n; l++)
{
for(c=0; c<l; c++)
{
    if(c<l)
    {
    printf("%5d", v[l*n+c]);
    }
    else
    {
    printf("      ");
    }
}
printf("\n");
}
printf("\n");
}

void imprimirdiagonal(int v[], int n)
{
int l, c;
for (l=0; l<n; l++)
{
for(c=0; c<n; c++)
{
    if(c==l)
    {
    printf("%5d", v[l*n+c]);
    }
    else
    {
    printf("      ");
    }
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

int msimetrica(int v[], int n)
{
    int l, c;
    for(l=0;l<n-1;l++)
    {
    for(c=l+1; c<n; c++)
    {
     if(v[l*n+c]!=v[c*n+l])
     {
         return 0;
     }
    }
    }
    return 1;
}


int main()
{
int vetor[]={1,0,0,0,1,0,0,0,1};
imprimirmatriz(vetor, 3, 3);
msimetrica(vetor, 3);

return 0;
}
