#include <stdio.h>

void testeLocal() {
    int x = 5;
    printf("x dentro da funcao = %d\n", x);
}

int main() {
    testeLocal();
    // printf("%d", x); // ERRO: x nao eh visivel aqui
    return 0;
}
