#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[10]={9,6,8,3,1,7,1,0,2,0};
    int z,t,v,w,j,h,k,l;
    int *p;
    p=vetor;

    t=*&p[1]+1;
    v=*(p+3);
    w=**&p*2;
    z=p[1]*(*p+2);
    j=p[*(p+3)]**p;
    h=*p**p**p;
    k=*(p+*(p+4))**(p+3);
    l=*p***&p**(p+2);


    printf("1- %d\n", t);
    printf("2- %d\n", v);
    printf("3- %d\n", w);
    printf("4- %d\n", z);
    printf("5- %d\n", j);
    printf("6- %d\n", h);
    printf("7- %d\n", k);
    printf("8- %d\n", l);

    return 0;
    }
