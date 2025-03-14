#include <stdio.h>

/*
A função scanf() é usada para ler entrada formatada do dispositivo de entrada padrão (stdin). 
A função scanf() faz parte da biblioteca padrão stdio.h e é usada para receber dados do usuário.
O Stdin (STandarD INput) é o dispositivo de entrada padrão, ou seja, o meio pelo qual um programa recebe informações do usuário. Geralmente, o teclado é o dispositivo de entrada padrão. 
*/

int main() {
    int idade;
    float altura;

    // Solicitar ao usuário a idade
    printf("Digite sua idade: ");
    scanf("%d", &idade);

    // Solicitar ao usuário a altura
    printf("Digite sua altura em metros: ");
    scanf("%f", &altura);

    // Exibir os valores inseridos
    printf("Você tem %d anos e sua altura é %.2f metros.\n", idade, altura);

    return 0;
}
