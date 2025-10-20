#include <stdio.h>

float calcular_novo_salario(float salario) {
    float percentual;

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

    return salario + (salario * percentual);
}

int main() {
    float salario, novo_salario;
    char opcao;

    do {
        printf("\nDigite o salario atual: R$ ");
        scanf("%f", &salario);

        novo_salario = calcular_novo_salario(salario);

        printf("Novo salario com aumento: R$ %.2f\n", novo_salario);

        printf("\nDeseja calcular outro salario? (S/N): ");
        scanf(" %c", &opcao);  // espaço antes de %c para ignorar o Enter

    } while (opcao == 'S' || opcao == 's');

    printf("\nPrograma encerrado. Obrigado!\n");
    return 0;
}
