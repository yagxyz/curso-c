//#include <stdlib.h>
//#include <stdio.h>
//
//void main()
//{
// int *ptr_a;
//
// ptr_a = malloc(sizeof(int));
// // cria a área necessária para 01 inteiro e
// // coloca em 'ptr_a' o endereço desta área.
//
//  if (ptr_a == NULL)
//  {
//    printf("Memória insuficiente!\n");
//    exit(1);
//  }
//
//  printf("Endereço de ptr_a: %p\n",  ptr_a);
//  *ptr_a = 90;
//  printf("Conteúdo de ptr_a: %d\n", *ptr_a);  // imprime 90
//  free(ptr_a);  // Libera a área alocada
//}



#include <stdlib.h>
void main()
{
  int i;
  int *v;
  v = malloc(10*sizeof(int));  // 'v' é um ponteiro para uma área que
                                     // tem 10 inteiros.
                                     // 'v' funciona exatamente como um vetor
  v[0] = 10;
  v[1] = 11;
  v[2] = 12;
  v[5] = 16;
  // continua...
  v[9] = 19;

  for(i = 0; i < 10; i++)
    printf("v[%d]: %d\n", i, v[i]);

  printf("Endereço de 'v': %p", v);  // imprime o endereço da área alocada para 'v'
  free(v);
}
