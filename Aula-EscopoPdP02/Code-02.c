#include <stdio.h>

// ---------------- VARIÁVEL GLOBAL ----------------
int contador_global = 0;

// Função que usa passagem por VALOR
void dobrar_por_valor(int n) {
    n = n * 2;                  // altera apenas a cópia local
    contador_global++;          // altera variável global
    printf("[dobrar_por_valor] n = %d | contador_global = %d\n", n, contador_global);
}

// Função que usa passagem por REFERÊNCIA (ponteiro)
void dobrar_por_referencia(int *n) {
    *n = *n * 2;                // altera o valor original
    contador_global++;          // também altera variável global
    printf("[dobrar_por_referencia] *n = %d | contador_global = %d\n", *n, contador_global);
}

// Função auxiliar para mostrar o valor atual
void mostrar_estado(const char *etapa, int numero) {
    printf("%s -> numero = %d | contador_global = %d\n", etapa, numero, contador_global);
}

int main() {
    // ---------------- VARIÁVEL LOCAL ----------------
    int numero = 5;

    mostrar_estado("Início do programa", numero);

    // Passagem por valor (não altera o valor original)
    dobrar_por_valor(numero);
    mostrar_estado("Após dobrar_por_valor", numero);

    // Passagem por referência (altera o valor original)
    dobrar_por_referencia(&numero);
    mostrar_estado("Após dobrar_por_referencia", numero);

    printf("\nFim do programa.\n");
    return 0;
}
