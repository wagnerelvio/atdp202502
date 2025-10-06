#include <stdio.h>
int main() {
    printf("Números pares entre 0 e 20 (usando o resto):\n");

    // O loop 'for' itera por TODOS os números de 0 a 20 (incrementando de 1 em 1)
    for (int i = 0; i <= 20; i++) {
        
        // Verificação do resto:
        // O operador '%' (módulo) retorna o resto da divisão de 'i' por 2.
        // Se o resto for 0, o número é PAR.
        if (i % 2 == 0) {
            printf("%d\n", i);
        }
    }

    return 0;
}
