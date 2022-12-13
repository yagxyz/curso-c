#include <stdlib.h>
void main()
{
  int *vet;
  int *ptr;

  vet = (int*)malloc(sizeof(int)*10);
  vet[4] = 44;  // 'vet' funciona como um vetor, depois de malloc

  ptr = vet;  // 'ptr'  aponta para o in�cio da
              // �rea alocada por 'vet

printf("%p\n",  vet);
  printf("%d\n",vet[4]);

  *ptr = 11;  // vet[0] = 11
              // coloca 11 na primeira posi��o da �rea alocada

 printf("%p\n",  ptr);
  printf("%d\n", *ptr);

  ptr++;      // avan�a o apontador
  *ptr = 12;  // vet[1] = 12

  printf("%p\n",  ptr);
  printf("%d\n", *ptr);

  // free(ptr);  // Liberar 'ptr' direto causa NULL POINTER ASSIGNMENT
  // Corrigindo, a forma correta �:
  ptr--;
  free(ptr);
}
