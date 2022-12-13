#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b, v;
    char c,o,d,i,g,e;
printf("Digite o codigo do piloto de cinco carateres exemplo 'voe747' \n");
scanf("%c%c%c%c%c%c", &c,&o,&d,&i,&g,&e);
printf("Digite a distancia percorrida em 'km' \n");
scanf("%f", &a);
printf("Digite o tempo em 'horas' \n");
scanf("%f", &b);

v=a/b;

printf("A velocidade m´edia do %c%c%c%c%c%c  foi %f km/h \n", c,o,d,i,g,e, v);


    return 0;
}
