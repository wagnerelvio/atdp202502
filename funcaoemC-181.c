#include <stdio.h>
int main() {
    float fahrenheit, celsius;

    // Solicita ao usuário que insira a temperatura em Fahrenheit
    printf("Digite a temperatura em graus Fahrenheit: ");
    scanf("%f", &fahrenheit);

    // Converte de Fahrenheit para Celsius
    celsius = (fahrenheit - 32) * 5/9;

    // Exibe o resultado
    printf("A temperatura em graus Celsius é: %.2f\n", celsius);

    return 0;
}
