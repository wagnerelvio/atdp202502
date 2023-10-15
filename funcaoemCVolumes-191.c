#include <stdio.h>
#include <math.h>

#define PI 3.14159265

// Função para calcular o volume de uma esfera
float calcular_volume_esfera(float raio) {
    return (4.0 / 3.0) * PI * pow(raio, 3);
}

// Função para calcular o volume de uma pirâmide
float calcular_volume_piramide(float base, float altura) {
    return (1.0 / 3.0) * base * altura;
}

// Função para calcular o volume de um cone
float calcular_volume_cone(float raio, float altura) {
    return (1.0 / 3.0) * PI * pow(raio, 2) * altura;
}

// Função para calcular o volume de um cubo
float calcular_volume_cubo(float aresta) {
    return pow(aresta, 3);
}

int main() {
    int escolha;
    
    printf("Escolha a forma para calcular o volume:\n");
    printf("1. Esfera\n");
    printf("2. Piramide\n");
    printf("3. Cone\n");
    printf("4. Cubo\n");
    
    scanf("%d", &escolha);

    switch (escolha) {
        case 1: {
            float raio;
            printf("Digite o raio da esfera: ");
            scanf("%f", &raio);
            float volume = calcular_volume_esfera(raio);
            printf("O volume da esfera é: %.2f\n", volume);
            break;
        }
        case 2: {
            float base, altura;
            printf("Digite a base da pirâmide: ");
            scanf("%f", &base);
            printf("Digite a altura da pirâmide: ");
            scanf("%f", &altura);
            float volume = calcular_volume_piramide(base, altura);
            printf("O volume da pirâmide é: %.2f\n", volume);
            break;
        }
        case 3: {
            float raio, altura;
            printf("Digite o raio do cone: ");
            scanf("%f", &raio);
            printf("Digite a altura do cone: ");
            scanf("%f", &altura);
            float volume = calcular_volume_cone(raio, altura);
            printf("O volume do cone é: %.2f\n", volume);
            break;
        }
        case 4: {
            float aresta;
            printf("Digite o tamanho da aresta do cubo: ");
            scanf("%f", &aresta);
            float volume = calcular_volume_cubo(aresta);
            printf("O volume do cubo é: %.2f\n", volume);
            break;
        }
        default:
            printf("Escolha inválida.\n");
            break;
    }

    return 0;
}
