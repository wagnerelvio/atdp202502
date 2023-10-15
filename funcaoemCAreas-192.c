#include <stdio.h>
#include <math.h>

#define PI 3.14159265

// Função para calcular a área de um quadrado
float calcular_area_quadrado(float lado) {
    return lado * lado;
}

// Função para calcular a área de um triângulo retângulo
float calcular_area_triangulo_retangulo(float base, float altura) {
    return 0.5 * base * altura;
}

// Função para calcular a área de um trapézio
float calcular_area_trapezio(float base_maior, float base_menor, float altura) {
    return 0.5 * (base_maior + base_menor) * altura;
}

// Função para calcular a área de uma circunferência
float calcular_area_circunferencia(float raio) {
    return PI * pow(raio, 2);
}

int main() {
    int escolha;
    
    printf("Escolha a forma para calcular a área:\n");
    printf("1. Quadrado\n");
    printf("2. Triângulo Retângulo\n");
    printf("3. Trapézio\n");
    printf("4. Circunferência\n");
    
    scanf("%d", &escolha);

    switch (escolha) {
        case 1: {
            float lado;
            printf("Digite o lado do quadrado: ");
            scanf("%f", &lado);
            float area = calcular_area_quadrado(lado);
            printf("A área do quadrado é: %.2f\n", area);
            break;
        }
        case 2: {
            float base, altura;
            printf("Digite a base do triângulo retângulo: ");
            scanf("%f", &base);
            printf("Digite a altura do triângulo retângulo: ");
            scanf("%f", &altura);
            float area = calcular_area_triangulo_retangulo(base, altura);
            printf("A área do triângulo retângulo é: %.2f\n", area);
            break;
        }
        case 3: {
            float base_maior, base_menor, altura;
            printf("Digite a base maior do trapézio: ");
            scanf("%f", &base_maior);
            printf("Digite a base menor do trapézio: ");
            scanf("%f", &base_menor);
            printf("Digite a altura do trapézio: ");
            scanf("%f", &altura);
            float area = calcular_area_trapezio(base_maior, base_menor, altura);
            printf("A área do trapézio é: %.2f\n", area);
            break;
        }
        case 4: {
            float raio;
            printf("Digite o raio da circunferência: ");
            scanf("%f", &raio);
            float area = calcular_area_circunferencia(raio);
            printf("A área da circunferência é: %.2f\n", area);
            break;
        }
        default:
            printf("Escolha inválida.\n");
            break;
    }

    return 0;
}
