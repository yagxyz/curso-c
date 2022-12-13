#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void preencher(int v[], int n, int max)
{
    int i;


    for (i=0; i<n; i++)
    {
        v[i]=rand()%(max+1);
    }
}
int busca_s(int v[], int n, int p)
{
    int i;
    for (i=0; i<n; i++)
    {
        if (v[i]==p)
        {
            return i;
        }
    }
    return -1;
}
void bubblesort(int v[], int n, int o)
{
    int p, c, aux;
    for(p=0; p<n-1; p++)
    {
        for(c=0; c<n-1-p; c++)
        {
            if(v[c]*o>v[c+1]*o)
            {
                aux=v[c];
                v[c]=v[c+1];
                v[c+1]=aux;
            }
        }
    }
}
void printvetor(int v[], int n)
{
    int i;
    for(i=0; i<n; i++)
    {
        printf(" %d", v[i]);
    }
    printf("\n");
}
int busca_b(int v[], int n, int p)
{
    int i=0, f=n-1, m, c=0;
    while(f>=i)
    {
        m=(f+i)/2;
        c++;
        if(v[m]==p)
        {
            return c;
        }
        else
        {
            if(p<v[m])
            {
                f=m-1;
            }
            else
            {
                i=m+1;
            }
        }
    }
    return -1;
}
void copiavetor(int a[], int b[], int n)
{
    int i;

    for (i=0; i<n; i++)
    {
        b[i]=a[i];
    }
}


int main ()
{
    srand(time(NULL));

    int n=15, vetor [n], vetorord[n], i, proc, res, max=100, bs, bb, e=0;
    double mbs=0, mbb=0;
    preencher(vetor, n, max);
    copiavetor(vetor, vetorord, n);
    bubblesort(vetorord, n, 1);

    for(i=0; i<1000; i++)
    {
        proc=rand()%(max+1);
        bs=busca_s(vetor, n, proc);
        bb=busca_b(vetorord, n, proc);

        if(bs>=0)
        {
            printf("buscaseq buscabin %5d %5d\n", bs+1, bb);
            mbs+=bs+1;
            mbb+=bb;
            e+=1;
        }
    }
    printf("\n busca seq %lf passos busca bin %lf passos \n", mbs/e, mbb/e);

    return 0;
}
