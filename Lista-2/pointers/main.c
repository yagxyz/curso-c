//
//#include <stdio.h>
//void main()
//{
//  int a;
//  int b;
//  int c;
//  int *ptr;  // declara um ponteiro para um inteiro
//             // um ponteiro para uma vari�vel do tipo inteiro
//  a = 90;
//  b = 2;
//  c = 3;
//  ptr = &a;
//
//  c=*ptr+b;
//
//  printf("Valor de ptr: %p, Conte�do de ptr: %d\n", ptr, *ptr);
//  printf("B: %d, C: %d", b, c);
//}



#include <stdio.h>
void main()
{
  int x;
  int *ptr;

  x = 5;
  ptr = &x;
  printf("O valor da vari�vel X �: %d\n", *ptr);  // derreferenciando um ponteiro

  *ptr = 10;  // usando derreferencia no "lado esquerdo" de uma atribui��o
  printf("Agora, X vale: %d\n", *ptr);
}
