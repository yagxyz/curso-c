#include <stdio.h>
#include <stdlib.h>

void hanoi(char o,char x,char d,int n)
{
    if(n>0)
    {
        hanoi(o,d,x,n-1);
        printf(" mover %c -> %c \n", o,d);
        hanoi(x,o,d,n-1);
    }
}

int main()
{
    char a,b,c;
    int n;
    a='a';b='b';c='c';
    n=3;
    hanoi(a,b,c,n);
return 0;
}
