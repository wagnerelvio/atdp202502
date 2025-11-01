#include <stdio.h>

int global = 10; // Escopo global

void funcao() {
    int local = 20; // Escopo local (somente dentro desta funcao)
    printf("Dentro da funcao: global = %d, local = %d\n", global, local);
}

int main() {
    funcao();
    // printf("%d", local); // ERRO: variavel local nao visivel aqui
    printf("Fora da funcao: global = %d\n", global);
    return 0;
}
