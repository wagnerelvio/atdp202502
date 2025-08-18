#include <stdio.h>
#include <math.h>
int main(void) {
  const double PI = 3.141592;
  double raio, area;
  printf("Digite o raio do circulo: ");
  scanf("%lf", &raio);
  area = PI * pow(raio, 2.0);
  printf("Area do circulo = %.2f\n", area);
  return 0;
}
