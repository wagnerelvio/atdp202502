#include <stdio.h>
#include <string.h>
//Exemplo de struct - 01

// Definicao da struct
struct Pessoa {
    char nome[50];
    int idade;
    float altura;
};

int main() {
    // Declaracao de uma variavel do tipo Pessoa
    struct Pessoa pessoa1;

    // Atribuicao de valores aos membros da struct
    strcpy(pessoa1.nome, "Pedro");
    pessoa1.idade = 20;
    pessoa1.altura = 1.74;

    // Acesso aos membros da struct e impressao
    printf("\n\n ****************************\n\n");
    printf("Nome: %s\n", pessoa1.nome);
    printf("Idade: %d anos\n", pessoa1.idade);
    printf("Altura: %.2f metros\n", pessoa1.altura);

    return 0;
}
