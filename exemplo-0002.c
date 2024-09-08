#include <stdio.h>  // Inclui a biblioteca padrao de entrada e saida

int main() {
    // Declaracao e inicializacao das variaveis
    int idade = 25;                // Declara uma variavel inteira e atribui o valor 25
    float salario = 3000.50;       // Declara uma variavel de ponto flutuante e atribui o valor 3000.50
    char nome_completo[] = "Cris Flores"; // Declara uma string e atribui o valor "Cris Flores"
    char cidade[] = "Sao Luis";   // Declara uma string e atribui o valor "Sao Luis"
    char estado[] = "MA";          // Declara uma string e atribui o valor "MA"

    // Imprimindo os valores das variaveis
    printf("Nome completo: %s\n", nome_completo);   // Imprime o nome completo
    printf("Idade: %d anos\n", idade);              // Imprime a idade
    printf("Salario: R$%.2f\n", salario);           // Imprime o salario com duas casas decimais
    printf("Cidade: %s\n", cidade);                 // Imprime a cidade
    printf("Estado: %s\n", estado);                 // Imprime o estado

    return 0; // Indica que o programa terminou com sucesso
}
