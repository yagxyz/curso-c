//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//    int x,r;
//    scanf("%d", &x);
//
//  while (x<0)
//    {
//      r=x%2;
//      x = x /2;
//
//    printf("cociente %d resto %d\n",x, r);
//    }
//
//
//    return 0;
//}


#include <stdio.h>
#include <conio.h>
int main(void)
{
    int contador = 1; //declarando e inicializando a variável de controle

    while (contador <= 10) // Testando a condição
    {
          printf("%d ", contador); //Executando um comando dentro do laço

          contador++; //atualizando a variável de controle
    }

    getch();
    return 0;
}
