#include <stdio.h>
#include <stdlib.h>

int main()
{
    int d,m,a;
    int i=0, r=0;
  do {
    printf("Digite uma data\nDia ");
    scanf("%d", &d);

    printf("Mes ");
    scanf("%d", &m);

    printf("Ano ");
    scanf("%d", &a);

    a=a%4;



if (m==2)
{
    if (a==0)
    {
      if ((d>0)&&(d<=29))
      {
      printf("A data esta certa\n");
      }
      else printf("A data esta errada\n");
    }
    else if ((d>0)&&(d<=28))
         {
      printf("A data esta certa\n");
         }
        else printf("A data esta errada\n");

}

else if ((m>=1)&&(m<=12))
{
    if ((d>=1)&&(d<=31))
   {
      switch(m)
      {
      case 4: r=1;
      break;
      case 6: r=1;
      break;
      case 9: r=1;
      break;
      case 11: r=1;
      break;
      default: r=0;
      }

      if ((r==1)&&(d<=30))
          {
              printf("A data esta certa\n");
          }
       else if ((r==0)&&(d<=31))
       {
        printf("A data esta certa\n");
       }
      }
      else printf("A data esta errada\n");
   }
   else printf("A data esta errada\n");


printf("Digite 1 para continuar, 0 para terminar ");
scanf("%d", &i);
    }
while(i==1);

    return 0;
}
