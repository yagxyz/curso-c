#include <stdio.h>
#include <stdlib.h>


float media(float v[], int ind, int elem)
{
    float soma;
    if (ind==0)
        return v[0]/elem;
    else
        soma = v[ind]/elem + media(v, ind-1, elem);
    return soma;
}

int main()
{
    float v[6]= {1,2,3,4,5};
    int  b=5;
    printf("%f\n", media(v, b-1, b));
    return 0;
}
