#include <stdio.h>
//Passagem por Valor
void dobrar(int x) {
    x = x * 2;
}

int main() {
    int n = 10;
    dobrar(n);
    printf("n apos a funcao = %d\n", n); // ainda eh 10
    return 0;
}