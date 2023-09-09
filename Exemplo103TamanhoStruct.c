/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>

struct Pessoa {
    char nome[20];
    int idade;
};

int main() {
    struct Pessoa pessoa1;
    printf("O tamanho da estrutura 'Pessoa' em bytes é: %zu\n", sizeof(pessoa1));
    
    return 0;
}
