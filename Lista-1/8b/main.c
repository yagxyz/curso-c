#include <stdio.h>
#include <stdlib.h>

int main()
{
  int a, b, c;

  printf("Escrva um numero enteiro");
  scanf("%d", &a);

  printf("Escrva um numero enteiro");
  scanf("%d", &b);

  c=b+a;

  if (c>20)
{
    c=c+8;

    printf("O resultado = %d \n", c);
}
else if (c<=20)
{
    c=c-5;

printf("O resultado = %d \n", c);

}

    else

        return 0;
}
