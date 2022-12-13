#include <stdio.h>
#include <stdlib.h>

void somar(float *num1, float *num2, float *result)
{
     printf("%f\n",*result);
    *result=*num1+*num2;
    printf("%f\n",*result);

}
void subtrair(float *num1, float *num2, float *result)
{
    *result=*num1-*num2;
    printf("%f\n",*result);

}
void dividir(float *num1, float *num2, float *result)
{
        *result=*num1/(*num2);
    printf("%f\n",*result);

}
void multiplicar(float *num1, float *num2, float *result)
{
        *result=*num1*(*num2);
    printf("%f\n",*result);

}

int main()
{
    float a=3,b=2, c=0;
    float *i,*j, *z;
    i=&a;
    j=&b;
    z=&c;

    somar(i,j,z);
    subtrair(i,j,z);
    dividir(i,j,z);
    multiplicar(i,j,z);



return 0;
}


