#include <stdio.h>
#include <stdlib.h>
#include <time.h>


double aniversarios(int n, int s)
{
    int i, j, aniv, dias[365];
    double anivc=0;

    for(i=0; i<s; i++)
    {
        for(j=0; j<365; j++) dias[j]=0;
        for(j=0; j<n; j++)
        {
            aniv=rand()%365;
            if(dias[aniv]>0)
            {
                anivc++;
                break;

            }
            else dias[aniv]++;
        }
    }

 return anivc/s;
}


double pi_monte_carlos(int n) //
{
    double x, y, i, c=0;
    int l=10000;
    for(i=0; i<n; i++)
    {
        x=(rand()%(l+1))/(double)l;
        y=(rand()%(l+1))/(double)l;
    if(x*x+y*y<=1)
    {
        c++;
    }
    }
    return 4*c/n;
}



int main()
{
    srand(time(NULL));
    int s, p;
    double a;
    while(1)
    {
        scanf("%d %d", &p, &s);
        a=aniversarios(p,s)*100;
        printf("%lf", a);
    }
    return 0;
}
