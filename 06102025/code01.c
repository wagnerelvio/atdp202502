#include <stdio.h>
int main() {
    printf("Números pares entre 0 e 20:\n");

    // O loop 'for' começa em 0, vai até 20 (inclusive) e incrementa de 2 em 2
    for (int i = 0; i <= 20; i = i + 2) {
        printf("%d\n", i);
    }

    return 0;
}
