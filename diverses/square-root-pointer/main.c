#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void transforma(double *, double *, double *);

int main()
{
    double vetor_int_1[] = {1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0, 10.0};
    double vetor_int_2[] = {20.0, 21.0, 22.0, 23.0, 24.0, 25.0, 26.0, 27.0, 28.0, 29.0};
    double vetor_int_3[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

    double *pointer_vetor_int_1 = &vetor_int_1;
    double *pointer_vetor_int_2 = &vetor_int_2;
    double *pointer_vetor_int_3 = &vetor_int_3;

    transforma(pointer_vetor_int_1, pointer_vetor_int_2, pointer_vetor_int_3);

    printf("Vetor vetor_int_1: \n");

    for(int i=0; i<10; i++){
        printf("[%d]=[%f]\n", i, *(pointer_vetor_int_1 + i));
    }

    printf("\nVetor vetor_int_2: \n");

    for(int i=0; i<10; i++){
        printf("[%d]=[%f]\n", i, *(pointer_vetor_int_2 + i));
    }

    printf("\nVetor vetor_int_3: \n");

    for(int i=0; i<10; i++){
        printf("[%d]=[%f]\n", i, *(pointer_vetor_int_3 + i));
    }

    return 0;
}

void transforma(double *pointer_vetor_int_1, double *pointer_vetor_int_2, double *pointer_vetor_int_3){

    double soma = 0.0, raiz = 0.0;

    for(int i=0; i<10; i++){

        soma = *(pointer_vetor_int_1 + i) + *(pointer_vetor_int_2 + i);

        raiz = sqrt(soma);

        *(pointer_vetor_int_3 + i) = raiz;
    }

    return 0;
}
