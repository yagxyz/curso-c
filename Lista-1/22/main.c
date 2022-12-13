#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
  unsigned int a;
  float b,c,d,e;

  printf("Digite um numero enteiro positivo\n");

  scanf("%u", &a);

  b=pow(a,2);
  c=pow(a,3);
  d=pow(a,1.0/2.0);
  e=pow(a,1.0/3.0);

  printf("O quadrado deste numero = %f\n", b);
  printf("O cubo deste numero = %f\n", c);
  printf("A raiz quadrada deste numero = %f\n", d);
  printf("A raiz cubica deste numero = %f\n", e);

  return 0;
}

