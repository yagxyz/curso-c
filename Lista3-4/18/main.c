#include <stdio.h>
#include <stdlib.h>

int digitos(int a)
{
    if(10>=a) return a;
    return a%10+digitos(a/10);

}

int main()
{
    int a,b;
    printf("Escreba dois numeros a,b \n");
    scanf("%d",&a);
    b=digitos(a);
    printf(" A somo dos digitos do numero = %d\n",b);
    return 0;
}




//        if(10>=a) return a;
//    else return digitos(a-10);
