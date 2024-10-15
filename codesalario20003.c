#include <stdio.h>

int main() {
    float salario, percentual, novo_salario;

    // Solicita ao usuário o salário atual
    printf("Digite o salario atual: R$ ");
    scanf("%f", &salario);

    // Verifica os intervalos salariais e atribui o percentual correspondente
    if (salario <= 1000.00) {
        percentual = 50;
    } else if (salario > 1000.00 && salario <= 2000.00) {
        percentual = 45;
    } else if (salario > 2000.00 && salario <= 3000.00) {
        percentual = 40;
    } else if (salario > 3000.00 && salario <= 4500.00) {
        percentual = 35;
    } else if (salario > 4500.00 && salario <= 5000.00) {
        percentual = 30;
    } else if (salario > 5000.00 && salario <= 7500.00) {
        percentual = 25;
    } else if (salario > 7500.00 && salario <= 10000.00) {
        percentual = 20;
    } else if (salario > 10000.00 && salario <= 15000.00) {
        percentual = 15;
    } else if (salario > 15000.00 && salario <= 20000.00) {
        percentual = 10;
    } else if (salario > 20000.00 && salario <= 25000.00) {
        percentual = 8;
    } else {
        percentual = 5;
    }

    // Calcula o novo salário com o aumento percentual
    novo_salario = salario + (salario * percentual / 100);

    // Exibe o percentual de aumento e o novo salário
    printf("Percentual de aumento: %.0f%%\n", percentual);
    printf("Novo salario: R$ %.2f\n", novo_salario);

    return 0;
}
