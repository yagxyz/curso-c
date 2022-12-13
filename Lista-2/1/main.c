#include <stdio.h>
#include <stdlib.h>


double converter_temperatura(double a, char b)
{
    double c;

      if (b=='f')
    {
         c=(a-32)/1.8;
    }

    else if(b=='c')
     {
          c=(a*1.8)+32;
     }

return c;
}



int main()
{
    double a, b;
    char c;

    printf("Escreba a temperatura e a unidade de medida Celsius(c) Fahrenheit(f) \n");
    scanf("%lf", &a);
    scanf(" %c", &c);

    b=converter_temperatura(a,c);

    printf("A temperatura = %lf ", b);

     return 0;
}
