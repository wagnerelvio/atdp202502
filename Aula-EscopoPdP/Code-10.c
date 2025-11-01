#include <stdio.h>
// Escopo e Memoria
int main() {
    for (int i = 0; i < 3; i++) {
        int valor = i * 2;
        printf("%d ", valor);
    }
    // valor eh destruida a cada iteracao
    return 0;
}