#include <stdio.h>

    int main(void)
   {
      int a, b, c;

      printf("Digite um numero enteiro ");
      scanf("%d", &a);
      printf("Digite um numero enteiro ");
        scanf("%d", &b);
        printf("Digite um numero enteiro ");
        scanf("%d", &c);


if (a>b){
        if(b>c)
        {
            printf("OS numeros ordenados\n %d %d %d\n", a,b,c);
        }
        else if (a>c)
        {
        printf("Os numeros ordenados\n %d %d %d\n", a,c,b);
        }
        else printf("Os numeros ordenados\n %d %d %d\n", c,a,b);
        }
else if (b>c)
{
       if (a>c)
        {
         printf("Os numeros ordenados\n %d %d %d\n", b,a,c);
        }
         else printf("Os numeros ordenados\n %d %d %d\n", b,c,a);
}
else printf("Os numeros ordenados\n %d %d %d\n", c,b,a);


       return 0;
   }
