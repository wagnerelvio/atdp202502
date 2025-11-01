#include <stdio.h>
// Controle de Escopo
int valor = 5;

void func() {
    int valor = 10; // escopo local (nao conflita com global)
    printf("Valor local = %d\n", valor);
}

int main() {
    func();
    printf("Valor global = %d\n", valor);
    return 0;
}