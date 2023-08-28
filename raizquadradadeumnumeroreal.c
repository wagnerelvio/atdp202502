#include <stdlib.h>
#include <stdio.h>
#include <math.h>
//raiz quadrada de um numero
int main() {
   float numero, raiz;

   printf("Digite um numero maior que zero: ");
   scanf("%f", &numero);

   raiz = sqrt(numero);

   printf("A raiz quadrada de %.2f eh %.2f", numero, raiz);

   return 0;
}
