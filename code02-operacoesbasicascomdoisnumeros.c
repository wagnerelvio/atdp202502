#include <stdio.h>
#include <stdlib.h>
/*
Programa com as operacoes basicas
(Soma, Subtrracao, Multiplicacao e Divisao)
com dois numeros reais.
*/
int main()
{
    float numero01, numero02;
    float soma, subtracao, multiplicacao, divisao;
    // Solicitar o primeiro numeros oa usuario
    printf("Digite o primeiro numero maior que zero:  ");
    scanf("%f", &numero01);

    // Solicitar o primeiro numeros oa usuario
    printf("Digite o segundo numero maior que zero:  ");
    scanf("%f", &numero02);


    // Operação de Soma com os dois numeros
    soma = numero01 + numero02;
    // Operação de Subtração com os dois numeros
    subtracao = numero01 - numero02;
// Operação de multiplicaçao com os dois numeros
    multiplicacao  = numero01 * numero02;
// Operação de divisão  com os dois numeros
    divisao = numero01/numero02;
    //Impressão dos valores das operacoes

    printf("\n\nA soma dos dois numeros eh igual a: %.2f\n", soma);
    printf("A subtracao dois numeros eh igual a: %.2f\n", subtracao);
    printf("A multiplicacao dois numeros eh igual a: %.2f\n", multiplicacao);
    printf("A divisao do primeiro numero pelo segundo eh igual a: %.2f\n", divisao);

    return 0;
}
