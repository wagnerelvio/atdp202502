#include <stdlib.h>
#include <stdio.h>
#include <math.h>

//Calculo das raizes de uma equacao do segundo grau
int main() {
   float a,b,c,delta,x1,x2;

   printf("Digite o coeficiente a: ");
   scanf("%f", &a);
   printf("Digite o coeficiente b: ");
   scanf("%f", &b);
      printf("Digite o coeficiente c: ");
   scanf("%f", &c);

   delta = (b*b) - 4*a*c;
//a=1;b=3;=c1= -4 --delta > 0;
//a=1;b=4;=c=4 --delta = 0;
//a=1;b=4;=c=20 --delta = < 0;


   // Verifica o valor de delta
    if (delta > 0) {

        //x1=sqrt(delta);
        x1=(-b + sqrt(delta))/(2*a);
        x2=(-b - sqrt(delta))/(2*a);
        printf("\nHa duas raizes reais!\n\n");
        printf("\ - O valor de x1 eh igual a: %.2f\n", x1);
        printf("\ - O valor de x2 eh igual a: %.2f\n", x2);

    } else if (delta == 0 ) {
                x1=(-b + sqrt(delta))/(2*a);
                printf("\nHa apenas uma raiz!\n\n");
                printf("\ - O valor de x1 eh igual a: %.2f\n",x1);

    } else {
        printf("\nNao ha raizes reais!\n");
    }
   return 0;
}
