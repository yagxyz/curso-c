#include <stdio.h>

void EsperaEnter()  // Defini��o da fun��o "EsperaEnter"
{
    int tecla;
    printf("Digite 1\n");
    do
    {
        tecla = getchar();
        if (tecla !=49) // Se nao for ENTER
        {
            printf("Digite 1\n");
        }
    } while(tecla != 49); // 13 e' o codigo ASCII do ENTER
}

void main()
{
    EsperaEnter();      // Chamada da fun��o definida antes
    // ...........
    EsperaEnter();      // Chamada da fun��o definida antes
    // ...........
    EsperaEnter();      // Chamada da fun��o definida antes
}
