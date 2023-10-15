#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    // Solicita ao usuário que insira a temperatura em Celsius
    printf("Digite a temperatura em graus Celsius: ");
    scanf("%f", &celsius);

    // Converte de Celsius para Fahrenheit
    fahrenheit = (celsius * 9/5) + 32;

    // Exibe o resultado
    printf("A temperatura em graus Fahrenheit é: %.2f\n", fahrenheit);

    return 0;
}
