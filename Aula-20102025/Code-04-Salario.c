#include <stdio.h>

int main() {
    float salario, novo_salario;
    float percentual;

    printf("Digite o salario atual: R$ ");
    scanf("%f", &salario);

    if (salario <= 1000.00) {
        percentual = 0.50;
    } else if (salario <= 2000.00) {
        percentual = 0.45;
    } else if (salario <= 3000.00) {
        percentual = 0.40;
    } else if (salario <= 4500.00) {
        percentual = 0.35;
    } else if (salario <= 6000.00) {
        percentual = 0.30;
    } else if (salario <= 7500.00) {
        percentual = 0.25;
    } else if (salario <= 10000.00) {
        percentual = 0.20;
    } else if (salario <= 15000.00) {
        percentual = 0.15;
    } else if (salario <= 20000.00) {
        percentual = 0.10;
    } else if (salario <= 25000.00) {
        percentual = 0.08;
    } else {
        percentual = 0.05;
    }

    novo_salario = salario + (salario * percentual);

    printf("\nPercentual de aumento: %.0f%%", percentual * 100);
    printf("\nNovo salario: R$ %.2f\n", novo_salario);

    return 0;
}
