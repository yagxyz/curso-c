#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b, c;
    float MediaPond;

    printf("Primeira nota\n");
    scanf("%f",&a);
    printf("Segunda nota\n");
    scanf("%f",&b);

    MediaPond=(2*a+3*b)/5;


    printf("A Media ponderada=%f\n", MediaPond);

    return 0;
}
