#include <stdio.h>
#include <stdlib.h>
//programa para calclular a media

int main() {
    float nota1, nota2, nota3, media;

    // Solicitar as três notas ao usuário
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    // Calcular a média das notas
    media = (nota1 + nota2 + nota3) / 3.0;

    // Verificar se o aluno está aprovado ou reprovado
    if (media >= 7.0) {
        printf("Aluno aprovado! Média: %.2f\n", media);
    } else {
        printf("Aluno reprovado. Média: %.2f\n", media);
    }

    return 0;
}
