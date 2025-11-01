#include <stdio.h>
// Passagem por Referencia
void dobrar(int *x) {
    *x = *x * 2;
}

int main() {
    int n = 10;
    dobrar(&n);
    printf("n apos a funcao = %d\n", n); // agora eh 20
    return 0;
}