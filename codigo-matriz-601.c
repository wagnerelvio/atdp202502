#include <stdio.h>
#
int main() {
    // Declarando uma matriz de inteiros 3x3
    int matriz[3][3];

    // Inicializando a matriz
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matriz[i][j] = i * 3 + j;
        }
    }

    // Acessando e imprimindo elementos da matriz
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
