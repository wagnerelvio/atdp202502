#include <stdio.h>
//Passagem de Parametros
void saudacao(char nome[]) {
    printf("Ola, %s!\n", nome);
}

int main() {
    saudacao("Joao");
    return 0;
}