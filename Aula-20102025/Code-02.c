#include <stdio.h>

int main() {
    float temperatura;
    char opcao;

    do {
        printf("\n--------------------------------------\n");
        printf("Informe a temperatura: ");
        scanf("%f", &temperatura);

        if (temperatura < 40) {
            printf("Severidade: RISCO MUITO BAIXO\n");
        } 
        else if (temperatura >= 40 && temperatura < 60) {
            printf("Severidade: RISCO BAIXO\n");
        } 
        else if (temperatura >= 60 && temperatura < 80) {
            printf("Severidade: *** ALERTA ***\n");
        } 
        else if (temperatura >= 80 && temperatura < 120) {
            printf("Severidade: RISCO MÉDIO\n");
        } 
        else if (temperatura >= 120 && temperatura < 170) {
            printf("Severidade: RISCO MODERADO — ALERTA AMARELO\n");
        } 
        else if (temperatura >= 170 && temperatura < 200) {
            printf("Severidade: RISCO ALTO — ALERTA LARANJA\n");
        } 
        else {
            printf("Severidade: RISCO MUITO ALTO — ALERTA VERMELHO\n");
        }

        printf("\nDeseja informar outra temperatura? (S/N): ");
        scanf(" %c", &opcao);  // espaço antes de %c ignora o ENTER anterior

    } while (opcao == 'S' || opcao == 's');

    printf("\nPrograma encerrado. Obrigado!\n");
    return 0;
}
