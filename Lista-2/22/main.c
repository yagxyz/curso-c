#include <stdio.h>
#include <stdlib.h>

int colisao(int c1[], int c2[]){
    int soma_raios, r;
    double dist_centros;

    dist_centros = sqrt(pow(c1[0]-c2[0], 2)+pow(c1[1]-c2[1], 2));
    soma_raios = c1[2]+c2[2];

    if (soma_raios>=dist_centros){
        r = 1;
    } else r = 0;

    return r;
}


int main()
{
    int c1[3], c2[3], r, i;
    for (i=0; i<=2; i++){
        scanf("%d", &c1[i]);
    }
    for (i=0; i<=2; i++){
        scanf("%d", &c2[i]);
    }
    r = colisao(c1, c2);
    printf("%d", r);
    return 0;
}

