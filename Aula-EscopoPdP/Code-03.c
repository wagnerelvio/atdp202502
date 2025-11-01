#include <stdio.h>
//Escopo Global
int contador = 0; // variavel global

void incrementa() {
    contador++;
}

int main() {
    incrementa();
    incrementa();
    printf("Contador global = %d\n", contador);
    return 0;
}