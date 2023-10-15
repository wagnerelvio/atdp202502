#include <stdio.h>

float celsius_para_fahrenheit(float celsius) {
    return (celsius * 9/5) + 32;
}

float fahrenheit_para_celsius(float fahrenheit) {
    return (fahrenheit - 32) * 5/9;
}

int main() {
    float temperatura, resultado;
    int escolha;

    printf("Escolha a conversão desejada:\n");
    printf("1. Celsius para Fahrenheit\n");
    printf("2. Fahrenheit para Celsius\n");
    scanf("%d", &escolha);

    if (escolha == 1) {
        printf("Digite a temperatura em graus Celsius: ");
        scanf("%f", &temperatura);
        resultado = celsius_para_fahrenheit(temperatura);
        printf("A temperatura em Fahrenheit é: %.2f\n", resultado);
    } else if (escolha == 2) {
        printf("Digite a temperatura em graus Fahrenheit: ");
        scanf("%f", &temperatura);
        resultado = fahrenheit_para_celsius(temperatura);
        printf("A temperatura em Celsius é: %.2f\n", resultado);
    } else {
        printf("Opção inválida.\n");
    }

    return 0;
}
