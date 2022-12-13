#include<stdio.h>

double area_triangulo(double base, double altura)
{
  double area;
  area = (base*altura)/2;
  return area;
}

int main()
{
  double base, altura, area;
  printf("Digite o valor da base: ");
  scanf("%lf", &base);
  printf("Digite o valor da altura: ");
  scanf("%lf", &altura);

  area = area_triangulo(base,altura);
  printf("Area = %lf\n", area);
  return 0;
}
