#include <stdio.h>

// --- Declaracao das funcões ---
float adicao(float a, float b);
float subtracao(float a, float b);
float multiplicacao(float a, float b);
float divisao(float a, float b);

// --- Funcao principal ---
int main() {
    float num1, num2, resultado;
    int opcao;

    printf("=== Calculadora Simples em C ===\n");
    printf("1 - Adicao\n");
    printf("2 - Subtracao\n");
    printf("3 - Multiplicacao\n");
    printf("4 - Divisao\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);
    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    switch(opcao) {
        case 1:
            resultado = adicao(num1, num2);
            printf("Resultado: %.2f\n", resultado);
            break;
        case 2:
            resultado = subtracao(num1, num2);
            printf("Resultado: %.2f\n", resultado);
            break;
        case 3:
            resultado = multiplicacao(num1, num2);
            printf("Resultado: %.2f\n", resultado);
            break;
        case 4:
            if (num2 != 0)
                resultado = divisao(num1, num2);
            else {
                printf("Erro: divisao por zero!\n");
                return 1;
            }
            printf("Resultado: %.2f\n", resultado);
            break;
        default:
            printf("Opcao invalida!\n");
    }

    return 0;
}

// --- Implementacao das funcões ---
float adicao(float a, float b) {
    return a + b;
}

float subtracao(float a, float b) {
    return a - b;
}

float multiplicacao(float a, float b) {
    return a * b;
}

float divisao(float a, float b) {
    return a / b;
}
