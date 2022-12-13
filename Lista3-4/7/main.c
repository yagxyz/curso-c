#include <stdio.h>
#include <stdlib.h>

int mdc(int a, int b)
{
if(b==0)
    return a;
else return mdc(b,a%b);
}

int main()
{
    int a,b;
    scanf("%d,%d",&a,&b);
    printf("%d", mdc(a,b));
    return 0;
}

