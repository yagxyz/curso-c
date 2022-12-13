#include <stdio.h>
#include <stdlib.h>

void detetor(char a)
{

    if (a=='g')

        {
       printf(" O caratere digitado foi g\n");

    }
     else


           if (a=='a')
        {
       printf(" O caratere digitado foi a\n");

    }
     else


            if (a=='v')
        {
       printf(" O caratere digitado foi v\n");

    }
     else


            if (a=='x')
        {
       printf(" O caratere digitado foi x\n");

    }
     else



            if (a=='e')
        {
       printf(" O caratere digitado foi e\n");

    }
     else
            printf("o carater é diferente de e, a, x, v, g \n");



}






void main()
{ char q;
    printf("Digite um carater \n");

    scanf("%c", &q);
   detetor(q);

  return 0;
}

