#include <stdio.h>

int main() {
    int tamanho;
    
    // Solicita ao usuário o tamanho do vetor
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    // Declara um vetor de inteiros com o tamanho especificado
    int Vetor[tamanho];

    // Solicita ao usuário que insira os valores para preencher o vetor
    for (int i = 0; i < tamanho; i++) {
        printf("Digite o valor para o elemento %d: ", i + 1);
        scanf("%d", &Vetor[i]);
    }

    // Imprime os valores do vetor
    printf("Valores do vetor: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", Vetor[i]);
    }
    printf("\n");

    return 0;
}
