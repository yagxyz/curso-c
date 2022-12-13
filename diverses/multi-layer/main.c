#include <stdio.h>
#include <stdlib.h>

int main()
{
    int **matriz1 = NULL, **matriz2 = NULL, **matriz3 = NULL;
    int linhas = 0, colunas = 0, valor = 0, soma = 0;

    printf("Informe o numero de linhas e colunas: \n");
    scanf("%d%d", &linhas, &colunas);

    matriz1 = malloc(linhas * sizeof(int*));
    matriz2 = malloc(linhas * sizeof(int*));
    matriz3 = malloc(linhas * sizeof(int*));

    //inicializa matrizes
    for (int i = 0; i < linhas; i++){

        *(matriz1 + i) = malloc(colunas * sizeof(int));
        *(matriz2 + i) = malloc(colunas * sizeof(int));
        *(matriz3 + i) = malloc(colunas * sizeof(int));

        for (int j = 0; j < colunas; j++){
            ++valor;
            matriz1[i][j] = valor;
            matriz2[i][j] = valor;
            matriz3[i][j] = 0;
        }
    }

    // realiza multiplicação
    for (int i = 0; i < linhas; i++){

        for (int j = 0; j < colunas; j++){

            int k = i, l = j, soma = 0;

            for (int z = 0; z <linhas; z++)
            {
                soma+= matriz1[i][z] * matriz2[z][j];
            }

            matriz3[i][j] = soma;

        }
    }

    //imprime matriz 1
    for (int i = 0; i < linhas; i++){

        printf("\n");
        for (int j = 0; j < colunas; j++){
            printf(" %d ", matriz1[i][j]);
        }
    }

    printf("\n");

    //imprime matriz 2
    for (int i = 0; i < linhas; i++){

        printf("\n");
        for (int j = 0; j < colunas; j++){
            printf(" %d ", matriz1[j][i]);
        }
    }

    printf("\n");

    //imprime matriz 3
    for (int i = 0; i < linhas; i++){

        printf("\n");
        for (int j = 0; j < colunas; j++){
            printf(" %d ", matriz3[i][j]);
        }
    }

 printf("\n");

}
