#include <stdio.h>
#include <stdlib.h>
//wp-02-code-2001-salario
int main()
{
    float salario;

    printf("Entre com o valor do salario que voce recebe: \n");
    scanf("%f",&salario);

    if(salario <=1000.00)
    {salario = salario*1.50;}

    else if (salario > 1000.00  && salario <= 2000.00)
      { salario = salario * 1.45; }
    else if (salario > 2000.00  && salario <= 3000.00)
      { salario = salario * 1.40; }
    else if (salario > 3000.00  && salario <= 4500.00)
      { salario = salario * 1.35; }
    else if (salario > 4500.00  && salario <= 5000.00)
      { salario = salario * 1.30; }
    else if (salario > 5000.00  && salario <= 7500.00)
      { salario = salario * 1.25; }
    else if (salario > 7500.00  && salario <= 10000.00)
     { salario = salario * 1.20; }
    else if (salario > 10000.00 && salario <= 15000.00)
     { salario = salario * 1.15; }
    else if (salario > 15000.00 && salario <= 20000.00)
     { salario = salario * 1.10; }
    else if (salario > 20000.00 && salario <= 2500.00)
     { salario = salario * 1.08; }
    else
     {  salario = salario*1.05; }

    printf("O valor do seu salario com o aumento eh: %.2f\n",salario);

    return 0;
}

