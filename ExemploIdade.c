#include <stdio.h>
//Uso do if, else if e else  - idade
int main() {
    int idade;


    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    if (idade < 18) {
        printf("Você é menor de idade.\n");
    } else if (idade >= 18 && idade < 65) {
        printf("Você é um adulto.\n");
    } else {
        printf("Você é um idoso.\n");
    }

    return 0;
}
