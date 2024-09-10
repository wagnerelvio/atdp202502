#include <stdio.h>  // Inclui a biblioteca padrao de entrada e saida
#include <string.h> // Inclui a biblioteca para manipulacao de strings
 


int main() {
    int idade;                      // Declaracao da variavel inteira para a idade
    float salario;                  // Declaracao da variavel de ponto flutuante para o salario
    char nome_completo[50];         // Declaracao da string para o nome completo
    char cidade[50];                // Declaracao da string para a cidade
    char estado[3];                 // Declaracao da string para o estado (2 caracteres + '\0')

    // Entrada de dados
    printf("Digite seu nome completo: ");
    fgets(nome_completo, 50, stdin);  // Ler o nome completo com espacos
    nome_completo[strcspn(nome_completo, "\n")] = '\0'; // Remove a nova linha do final

    printf("Digite sua idade: ");
    scanf("%d", &idade); // Ler a idade

    printf("Digite seu salario: ");
    scanf("%f", &salario); // Ler o salario

    printf("Digite sua cidade: ");
    scanf(" %[^\n]s", cidade); // Ler a cidade

    printf("Digite seu estado (sigla de 2 letras): ");
    scanf("%2s", estado); // Ler o estado (maximo de 2 caracteres)

    // Exibindo as informacoes
    printf("\n--- Informacoes Pessoais ---\n");
    printf("Nome completo: %s\n", nome_completo);
    printf("Idade: %d anos\n", idade);
    printf("Salario: R$%.2f\n", salario);
    printf("Cidade: %s\n", cidade);
    printf("Estado: %s\n", estado);

    return 0; // Indica que o programa terminou com sucesso
}
