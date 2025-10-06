#include <stdio.h>
int main() {
    printf("Números entre 0 e 20 que são MÚLTIPLOS de 3 E 5:\n");
    
    // O loop itera por todos os números de 0 a 20
    for (int i = 0; i <= 20; i++) {
        
        // A condição verifica se:
        // 1. O resto da divisão por 3 é 0 (múltiplo de 3) E
        // 2. O resto da divisão por 5 é 0 (múltiplo de 5)
        if ((i % 3 == 0) && (i % 5 == 0)) {
            printf("%d\n", i);
        }
    }

    return 0;
}
