#include <stdio.h>

float celsius_para_fahrenheit(float celsius) {
    return (celsius * 9/5) + 32;
}

float fahrenheit_para_celsius(float fahrenheit) {
    return (fahrenheit - 32) * 5/9;
}

float celsius_para_kelvin(float celsius) {
    return celsius + 273.15;
}

float kelvin_para_celsius(float kelvin) {
    return kelvin - 273.15;
}

float fahrenheit_para_kelvin(float fahrenheit) {
    float celsius = fahrenheit_para_celsius(fahrenheit);
    return celsius_para_kelvin(celsius);
}

float kelvin_para_fahrenheit(float kelvin) {
    float celsius = kelvin_para_celsius(kelvin);
    return celsius_para_fahrenheit(celsius);
}

int main() {
    float temperatura, resultado;
    int escolha;

    printf("Escolha a conversão desejada:\n");
    printf("1. Celsius para Fahrenheit\n");
    printf("2. Fahrenheit para Celsius\n");
    printf("3. Celsius para Kelvin\n");
    printf("4. Kelvin para Celsius\n");
    printf("5. Fahrenheit para Kelvin\n");
    printf("6. Kelvin para Fahrenheit\n");
    scanf("%d", &escolha);

    printf("Digite a temperatura: ");
    scanf("%f", &temperatura);

    switch (escolha) {
        case 1:
            resultado = celsius_para_fahrenheit(temperatura);
            printf("Resultado: %.2f Fahrenheit\n", resultado);
            break;
        case 2:
            resultado = fahrenheit_para_celsius(temperatura);
            printf("Resultado: %.2f Celsius\n", resultado);
            break;
        case 3:
            resultado = celsius_para_kelvin(temperatura);
            printf("Resultado: %.2f Kelvin\n", resultado);
            break;
        case 4:
            resultado = kelvin_para_celsius(temperatura);
            printf("Resultado: %.2f Celsius\n", resultado);
            break;
        case 5:
            resultado = fahrenheit_para_kelvin(temperatura);
            printf("Resultado: %.2f Kelvin\n", resultado);
            break;
        case 6:
            resultado = kelvin_para_fahrenheit(temperatura);
            printf("Resultado: %.2f Fahrenheit\n", resultado);
            break;
        default:
            printf("Opção inválida.\n");
    }

    return 0;
}
