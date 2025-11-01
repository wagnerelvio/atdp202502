#include <stdio.h>
//Escopo de Bloco
int main() {
    int a = 10;
    {
        int b = 20;
        printf("Dentro do bloco: a = %d, b = %d\n", a, b);
    }
    // printf("%d", b); // ERRO: b so existe dentro do bloco
    return 0;
}