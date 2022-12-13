#include <stdio.h>
#include <stdlib.h>

double sqrt_newton(double y)
{
    int i;
    double x;

x=y/2;

    for(i=0; i<=10; i++)
        {
        x=x-(x*x-y)/(2*x); //Metodo de newton
        }

return x;
}

int main()
{

    double a,b;

    scanf("%lf", &a);

    b=sqrt_newton(a);
printf("\n%lf",b);

    return 0;
}
