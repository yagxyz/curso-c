#include <stdio.h>

int fib;
int fibonacci_n(int x)
{
    fib=0;
    for(int i=1,j=1;x>fib;j<=i?j+=i:(i<j?i+=j:0))
    {
        j<=i?fib=i:(i<j?fib=j:0);
    }
    return fib;
}

int main()
{
    int n;
    printf("\nDigite um numero: ");
    scanf("%d", &n);
    int fibonacci_n(int x);
    fib=fibonacci_n(n);
    printf("\nO numero correspondente a serie de fibonacci e: %d\n", fib);
    return 0;
}
