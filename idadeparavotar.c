#include <stdio.h>

int main() {
    int idade;

    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    if (idade < 16) {
        printf("Você não pode votar!.\n");
    } else if (idade >= 16 && idade < 18) {
        printf("O voto é facultativo. Você pode votar mas não é obrigado.");
    } else if (idade >= 18 && idade < 70) {
        printf("Você é obrigado a votar.");
    } else {
        printf("O voto é facultativo.");
    }

    return 0;
}
